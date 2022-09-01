/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:59:54 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 14:19:29 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
	std::cout << "Dog default constrcutor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &n): Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = n.type;
	this->brain = new Brain();
	this->brain->copyBrain(n.getBrain());
}

Dog	&Dog::operator=(const Dog &n)
{
	if (this != &n)
	{
		this->type = n.type;
		this->brain->copyBrain(n.getBrain());
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << ": ouaf!" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

std::string	Dog::getIdea(unsigned int i) const
{
	if (i < 100)
		return (this->brain->getIdea(i));
	else
		std::cout << "Index " << i << " idea invalid (getIdea)" << std::endl;
	return ("");
}

void	Dog::setIdea(unsigned int i, std::string s)
{
	if (i < 100)
		return (this->brain->setIdea(i, s));
	else
		std::cout << "Index " << i << " idea invalid (setIdea)" << std::endl;
}