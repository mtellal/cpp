/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:21:40 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/28 17:23:13 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
	std::cout << "Default constuctor called" << std::endl;
}

Fixed::Fixed(Fixed const &source) : rawBits(source.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const i)
{
	std::cout << "Interger const constructor called" << std::endl;
	rawBits = i << ffract;
}

Fixed::Fixed(const float f)
{
	std::cout << "FLoat const constructor called" << std::endl;
	rawBits = (int)(roundf(f * (1 << ffract)));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &source)
{
	std::cout << "Copy assignment called" << std::endl;
	if (this != &source)
		rawBits = source.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &a)
{
	out << a.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	return (this->rawBits);
}

void	Fixed::setRawBits(int const n)
{
	this->rawBits = n;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->rawBits / (float)(1 << this->ffract));
}

int	Fixed::toInt(void) const
{
	if (this->rawBits < 0)
		return -1 * ((int)(-this->rawBits >> this->ffract));
	return ((int)(this->rawBits >> this->ffract));
}
