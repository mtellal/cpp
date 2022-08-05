/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:06:44 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/05 13:33:08 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();	
}

Cat::Cat(const Cat &n): Animal(n)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain();
	brain->copyBrain(n.getBrain());
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
	std::cout << this->type << ": M I A O U !" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Cat &obj)
{
	out << obj.getType();
	return (out);
}

Brain	*Cat::getBrain(void) const
{
	return (this->brain);
}

void	Cat::setBrain(Brain *b)
{
	delete this->brain;
	this->brain = new Brain();
	this->brain->copyBrain(b);
}

std::string	Cat::getIdeas(int i)
{
	return (this->brain->getIdeas(i));
}

void	Cat::setIdeas(int i, std::string s)
{
	this->brain->setIdeas(i, s);
}
