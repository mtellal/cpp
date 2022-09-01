/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:06:44 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 13:59:06 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &n): Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = n.type;
	this->brain = new Brain();
	this->brain->copyBrain(n.getBrain());
}

Cat	&Cat::operator=(const Cat &n)
{
	if (this != &n)
	{
		this->type = n.type;
		this->brain->copyBrain(n.getBrain());
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << ": miaou !" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}

std::string	Cat::getIdea(unsigned int i) const
{
	if (i < 100)
		return (this->brain->getIdea(i));
	else
		std::cout << "Index " << i << " idea invalid (getIdea)" << std::endl;
	return ("");
}

void	Cat::setIdea(unsigned int i, std::string s)
{
	if (i < 100)
		return (this->brain->setIdea(i, s));
	else
		std::cout << "Index " << i << " idea invalid (setIdea)" << std::endl;
}