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

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog default constrcutor called" << std::endl;
}

Dog::Dog(const Dog &n): Animal(n)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &n)
{
	if (this != &n)
		this->type = n.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->type << std::endl << "O U A F" << std::endl;
}
