/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:27:37 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 15:33:42 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &n)
{
	int	i = 0;
	std::cout << "Brain parameters constructor called" << std::endl;
	while (i < 100)
	{
		ideas[i] = n.ideas[i];
		i++;
	}
}

Brain	&Brain::operator=(const Brain &n)
{
	if (this != &n)
	{
		int	i = 0;
		while (i < 1000)
		{
			ideas[i] = n.ideas[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdeas(unsigned int index, std::string newIdeas)
{
	if (newIdeas != "" && index < 100)
		ideas[index] = newIdeas;
}

std::string	Brain::getIdeas(unsigned int index) const
{
	if (index < 100)
		return (ideas[index]);
	else
		return ("");
}

void	Brain::displayAnimalIdeas(unsigned int number) const
{
	unsigned int	i = 0;
	while (i < number && i < 100)
	{
		std::cout << "ideas n " << i << " = " << ideas[i] << std::endl;
		i++;
	}
}

void            Brain::setAnimalIdeas(unsigned int number)
{
        unsigned int     i = 0;
        while (i < number && i < 100)
        {
                if (i % 2 == 0)
                        Brain::setIdeas(i, "dormir");
                else if (i % 3 == 0)
                        Brain::setIdeas(i, "jouer");
                else
                        Brain::setIdeas(i, "manger");
                i++;
        }
}
