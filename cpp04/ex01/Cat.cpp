/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:06:44 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 15:34:50 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"), cerveau(new Brain)
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &n): Animal("Cat"),  cerveau(new Brain)
{
	std::cout << "Cat copy constructor called" << std::endl;
	type = n.type;
}

Cat	&Cat::operator=(const Cat &n)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &n)
		type = n.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete cerveau;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat makeSound function memmber called" << std::endl << "M I A O U" << std::endl;
}

std::string	Cat::getIdeas(unsigned int index) const
{
	return (cerveau->getIdeas(index));
}

void	Cat::setIdeas(unsigned int index, std::string idee)
{
	cerveau->setIdeas(index, idee);
}

void            Cat::setAnimalIdeas(unsigned int number)
{
        cerveau->setAnimalIdeas(number);
}

void            Cat::displayAnimalIdeas(unsigned int number) const
{
        cerveau->displayAnimalIdeas(number);
}
