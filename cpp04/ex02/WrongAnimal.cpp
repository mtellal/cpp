/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:44:17 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 15:01:48 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &n): type(n)
{
	std::cout << "WrongAnimal parameters constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &n): type(n.type)
{
	std::cout << "WroingAnimal copyu constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &n)
{
	if (this != &n)
		type = n.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const 
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << this->type << ": W R O N G   A N I M A L !" << std::endl;
}
