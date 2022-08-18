/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:14:09 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/18 18:09:30 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>
#include <string>

struct	chaine
{
	std::string	s;
};

std::ostream	&operator<<(std::ostream &out, const chaine &s)
{
	out << s.s;
	return (out);
}

template<class T>
void	iter(T *tab, size_t l, void (*fptr)(T &))
{
	size_t	i;

	i = 0;
	while (i < l)
	{
		(*fptr)(tab[i]);
		i++;
	}
}	

template<class T>
void	displayTab(T *tab, size_t l)
{
	size_t	i = 0;

	while (i < l)
	{
		std::cout << " | " << tab[i];
		i++;
	}
	std::cout << std::endl;
}

#endif
