/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:59:54 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/05 14:44:12 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog default constrcutor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &n): Animal(n)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain();
	brain->copyBrain(n.getBrain());
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
	std::cout << this->type << ": O U A F !" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}

void	Dog::setBrain(Brain *b)
{
	delete this->brain;
	this->brain = new Brain();
	this->brain->copyBrain(b);
}

std::string	Dog::getIdeas(int i)
{
	return (this->brain->getIdeas(i));
}

void	Dog::setIdeas(int i, std::string s)
{
	this->brain->setIdeas(i, s);
}

