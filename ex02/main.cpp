#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
	Array<int> a(5);
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << std::endl;

	std::cout << "--------------------------" << std::endl;
	Array<char> b(5);
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << std::endl;

	std::cout << "--------------------------" << std::endl;
	Array<double> c(5);
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    Array<int> tmp = numbers;
    Array<int> test(tmp);

	std::cout << "--------------------------" << std::endl;
	std::cout << numbers[0] << " " << tmp[0] << " " << test[0] << std::endl;
	std::cout << &numbers[0] << " " << &tmp[0] << " " << &test[0] << std::endl;
	std::cout << "--------------------------" << std::endl;
	std::cout << numbers.size() << std::endl;
	std::cout << "--------------------------" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		if (tmp[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		if (test[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "--------------------------" << std::endl;
	try
    {
		long long x = -4294966547;
		std::cout << numbers[x] << std::endl;
		std::cout << numbers[749] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << "--------------------------" << std::endl;
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
