/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:42:11 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/18 15:49:02 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<class T>
void	swap(T &x, T &y)
{
	T	z;

	z = x;
	x = y;
	y = z;
}


template<class T>
T	min(T x, T y)
{
	return (x > y ? y : x);
}


template<class T>
T	max(T x, T y)
{
	return (x > y ? x : y);
}

#endif
