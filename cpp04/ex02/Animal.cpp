/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:33:13 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 13:58:48 by mtellal          ###   ########.fr       */
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

Animal::Animal(std::string s) : type(s)
{
	std::cout << "Animal parameter constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &n)
{
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
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << this->type << ": Animal Sound !"  << std::endl;
}

std::ostream    &operator<<(std::ostream &o, const Animal &n)
{
        o << n.getType();
        return (o);
}
