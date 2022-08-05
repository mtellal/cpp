/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:06:44 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 13:59:06 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &n): Animal(n)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &n)
{
	if (this != &n)
		this->type = n.type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->type << ": M I A O U !" << std::endl;
}

std::ostream	&operator<<(std::ostream &out, const Cat &obj)
{
	out << obj.getType();
	return (out);
}
