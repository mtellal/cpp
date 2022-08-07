/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:14:28 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/05 11:40:18 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &source)
{
	int	i;

	i = 0;
	std::cout << "Brain copy constructor called" << std::endl;
	while (i < 100)
	{
		this->ideas[i] = source.getIdeas(i);
		i++;
	}
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &obj)
{
	int	i;

	i = 0;
	if (this != &obj)
	{
		while (i < 100)
		{
			this->ideas[i] = obj.getIdeas(i);
			i++;
		}
	}
	return (*this);
}

std::string	Brain::getIdeas(int i) const
{
	return (this->ideas[i]);
}

void	Brain::setIdeas(int i, std::string s)
{
	this->ideas[i] = s;
}

void	Brain::copyBrain(Brain *b)
{
	int	i = 0;

	while (i < 100)
	{
		this->ideas[i] = b->getIdeas(i);
		i++;
	}
}
