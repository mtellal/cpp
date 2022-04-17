/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:06:44 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/17 16:00:53 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &n): Animal("Cat")
{
	std::cout << "Cat copy constructor called" << std::endl;
	type = n.type;
}

Cat	&Cat::operator=(const Cat &n)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &n)
		type = n.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat makeSound function memmber called" << std::endl << "M I A O U" << std::endl;
}
