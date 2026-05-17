/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:25:06 by hnemmass          #+#    #+#             */
/*   Updated: 2026/05/15 19:04:27 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template <typename T, typename T2>
void iter(T *array, const size_t size, T2 function)
{
	for (size_t i = 0; i < size; i++)
		function(array[i]);
}