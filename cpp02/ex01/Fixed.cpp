/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:21:40 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/02 13:21:52 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
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
	value = n << Fixed::fbits;
}

Fixed::Fixed(const float n)
{
	std::cout << "FLoat const constructor called" << std::endl;
	value = (int)(round(n * (1 << Fixed::fbits)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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
	out << a.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int const n)
{
	value = n;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::fbits));
}

int	Fixed::toInt(void) const
{
	if (this->value < 0)
		return -1 * ((int)(-this->value >> Fixed::fbits));
	return ((int)(this->value >> Fixed::fbits));
}
