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

WrongCat::WrongCat(): WrongAnimal("Wrong Cat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &n): WrongAnimal("Wrong Cat")
{
	std::cout << "WrongCat parameters constructor called" << std::endl;
	type = n.type;
}

WrongCat	&WrongCat::operator=(const WrongCat &n)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &n)
		type = n.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << this->type << ": W R O N G     C A T !" << std::endl;
}
