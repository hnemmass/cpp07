#include <iostream>
#include <cstdlib>
#include "Array.hpp"
// #include "Array.tpp"

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
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
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
        // numbers[i] = rand();
		std::cout << numbers[i] << std::endl;
    }
    delete [] mirror;//
    return 0;
}