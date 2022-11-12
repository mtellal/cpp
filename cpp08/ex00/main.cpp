/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:16:39 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/25 11:35:22 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <deque>

#include "EasyFind.hpp"

template<class T>
void	initSequenceContainer(T &obj, int l)
{
	int	i = 0;

	while (i < l)
		obj.push_back(i++);
}

template<class T>
void	tryToFind(T &obj, int i)
{

	try
	{
		std::cout << *easyFind(obj, i) << ": found !!" << std::endl;
	} catch (const std::exception &e)
	{
		std::cout << i << ": " << e.what() << std::endl;
	}
}

int main()
{
	int					i = 0;

	std::list<int>		l;
	std::vector<int>	v; 
	std::deque<int>		d;

	initSequenceContainer(l, 5);
	initSequenceContainer(v, 5);
	initSequenceContainer(d, 5);

	std::cout << "/////	TRY TO FIND ON LIST	/////////" << std::endl;

	while (i < 10)
	{
		tryToFind(l, i);
		i++;
	}

	i = 0;

	std::cout << std::endl << "/////	TRY TO FIND ON VECTOR	/////////" << std::endl;
	
	while (i < 10)
	{
		tryToFind(v, i);
		i++;
	}

	i = 0;

	std::cout << std::endl << "/////	TRY TO FIND ON DEQUE	/////////" << std::endl;
	
	while (i < 10)
	{
		tryToFind(d, i);
		i++;
	}
	
	i = 0;

	
	return (0);
}
