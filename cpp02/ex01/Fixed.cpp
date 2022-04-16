/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:21:40 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/15 16:31:40 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constuctor called" << std::endl;
}

Fixed::Fixed(Fixed const &n)
{
	value = n.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Interger const constructor called" << std::endl;
	value = (n << bits);
}

Fixed	&Fixed::operator=(Fixed const &n)
{
	std::cout << "Copy assignment called" << std::endl;
	if (this != &n)
		value = n.value;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &a)
{
	std::cout << "Shift left assignment called" << std::endl;
	out << a.getRawBits();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const n)
{
	std::cout << "setRawBits member function called" << std::endl;
	value = n;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


