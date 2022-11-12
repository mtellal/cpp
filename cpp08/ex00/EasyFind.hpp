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

#include <algorithm>
#include <iostream>

class NotFound : public std::exception
{
	public:
		const char *what(void) const throw()
		{
			return ("Not found");
		}
};

template <class T>
typename T::iterator	easyFind(T c, int i)
{
	typename T::iterator	it;

	it = std::find(c.begin(), c.end(), i);
	if (it != c.end())
		return (it);
	else
		throw NotFound();
}

#endif
