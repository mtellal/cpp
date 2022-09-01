/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:55:51 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 15:01:23 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &n): WrongAnimal()
{
	std::cout << "WrongCat parameters constructor called" << std::endl;
	this->type = n.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &n)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &n)
		type = n.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->type << ": Wrong miaou !" << std::endl;
}
