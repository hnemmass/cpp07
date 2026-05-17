/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 19:57:47 by hnemmass          #+#    #+#             */
/*   Updated: 2026/05/15 19:29:00 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void print(const T &array)
{
	std::cout << array << std::endl;
}

void Toupper(const std::string &s)
{
	std::string ss = s;
	for(size_t i = 0; i < ss.length(); i++)
	{
		if (ss[i] >= 'a' && ss[i] <= 'z')
			ss[i] -= 32;
	}
	std::cout << ss << std::endl;
}

void isodd(const int &s)
{
	if (s % 2 == 0)
		std::cout << "the number is even" << std::endl;
	else
		std::cout << "the number is odd" << std::endl;
	return;
}

int main()
{
	const int s[] = {1, 2, 3, 4, 5};
	const size_t size = sizeof(s) / sizeof(s[0]);
	
	::iter(s, size, print<int>);

	std::cout << "-------- test1 --------" << std::endl;
	::iter(s, size, isodd);
	
	std::cout << "-------- test2 --------" << std::endl;
	const std::string c[] = {"hello", "world", "hahaH69Hahah"};
	const size_t size1 = sizeof(c) / sizeof(c[0]);
	::iter(c, size1, Toupper);
}