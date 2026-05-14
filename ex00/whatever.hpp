/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnemmass <hnemmass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 16:14:08 by hnemmass          #+#    #+#             */
/*   Updated: 2026/05/14 17:18:48 by hnemmass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap(T &x, T &y)
{
	T temp;
	
	temp = x;
	x = y;
	y = temp;
}

template <typename T> T &min(T &x, T &y)
{
	return ((x < y) ? x : y);
}

template <typename T> T &max(T &x, T &y)
{
	return ((x > y) ? x : y);
}