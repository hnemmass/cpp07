/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:29:07 by hnemmass          #+#    #+#             */
/*   Updated: 2026/05/19 19:09:28 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _array(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n): _array(new T[n]), _size(n)
{}

template <typename T>
Array<T>::Array(const Array &other): _array(new T[other._size]), _size(other._size)
{
	for(unsigned int i = 0; i < other._size; i++)
		this->_array[i] = other._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] this->_array;
		this->_size = other._size;
		this->_array = new T[_size];
		for(unsigned int i = 0; i < _size; i++)
			this->_array[i] = other._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
T &Array<T>::operator[](size_t index)
{
	if (index >= _size)
		throw std::runtime_error ("index is out of bound");
	return (_array[index]);
}

template <typename T>
const T &Array<T>::operator[](size_t index) const
{
	if (index >= _size)
		throw std::runtime_error ("index is out of bound");
	return (_array[index]);
}

template <typename T>
unsigned int Array<T>::size()
{
	return (_size);
}