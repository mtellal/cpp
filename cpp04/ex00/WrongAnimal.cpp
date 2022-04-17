/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:44:17 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/17 17:11:36 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
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
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &n)
		type = n.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const 
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makeSound() function member called\n" << "W R O N G   A N I M A L" << std::endl;
}
