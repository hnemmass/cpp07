/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:18:40 by hnemmass          #+#    #+#             */
/*   Updated: 2026/05/19 19:19:59 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> class Array
{
	private:
		T *_array;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();

		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;

		unsigned int size() const;
};

#include "Array.tpp"