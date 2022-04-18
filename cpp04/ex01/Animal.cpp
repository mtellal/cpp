/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:33:13 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/17 15:53:31 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &n): type(n.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::Animal(const std::string n): type(n)
{
	std::cout << "Animnal parameters constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &n)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &n)
		type = n.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound" << std::endl;
}

std::ostream    &operator<<(std::ostream &o, const Animal &n)
{
        o << n.getType();
        return (o);
}
