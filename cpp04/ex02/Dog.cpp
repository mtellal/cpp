/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:59:54 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 15:15:49 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"),  cerveau(new Brain)
{
	std::cout << "Dog default constrcutor called" << std::endl;
}

Dog::Dog(const Dog &n): Animal("Dog"),  cerveau(new Brain)
{
	std::cout << "Dog copy constructor called" << std::endl;
	type = n.type;
}

Dog	&Dog::operator=(const Dog &n)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &n)
	{
		type = n.type;
		cerveau = n.cerveau;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete cerveau;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog makeSound() function member called" << std::endl << "O U A F" << std::endl;
}

void	Dog::dogFunction(void) const
{
	std::cout << "Dog dogFunction called" << std::endl;
}

std::string	Dog::getIdeas(unsigned int index) const
{
	return (cerveau->getIdeas(index));
}

void	Dog::setIdeas(unsigned int index, std::string idee)
{
	cerveau->setIdeas(index, idee);
}

void            Dog::setAnimalIdeas(unsigned int number)
{
	cerveau->setAnimalIdeas(number);
}

void		Dog::displayAnimalIdeas(unsigned int number) const
{
	cerveau->displayAnimalIdeas(number);
}

