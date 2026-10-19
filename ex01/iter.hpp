/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 17:25:06 by hnemmass          #+#    #+#             */
/*   Updated: 2026/10/18 23:59:06 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template <typename T, typename T3, typename T2>
void iter(T *array, const T3 size, T2 function)
{
	if (!array)
		return ;
	for (T3 i = 0; i < size; i++)
		function(array[i]);
}