/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:20:56 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/22 17:36:58 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

#include <array>
#include <vector>

template <class T>
int	easyFind(T c, int i)
{
	size_t	l;
	size_t	j = 0;

	l = c.size();
	while (j < l)
	{
		if (c.at(j) == i)
			return j;
		j++;
	}
	return (-1);
}

#endif
