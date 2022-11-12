/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:42:38 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/28 18:07:48 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : rawBits(0)
{
}

Fixed::Fixed(const int i)
{
	rawBits = i << ffract;
}

Fixed::Fixed(const float i)
{
	rawBits = (float)roundf(i * (1 << ffract));
}

Fixed::Fixed(const Fixed &source) : rawBits(source.getRawBits())
{
}

Fixed::~Fixed(void) 
{
}

Fixed	&Fixed::operator=(const Fixed &source)
{
	if (this != &source)
		rawBits = source.getRawBits();
	return (*this);
}

/*	COMPARISON OPERATORS	*/

bool	Fixed::operator<(const Fixed &operand) const
{
	return (this->getRawBits() < operand.getRawBits());
}

bool    Fixed::operator>(const Fixed &operand) const
{
        return (this->getRawBits() > operand.getRawBits());
}

bool    Fixed::operator<=(const Fixed &operand) const
{
        return (this->getRawBits() <= operand.getRawBits());
}

bool    Fixed::operator>=(const Fixed &operand) const
{
        return (this->getRawBits() >= operand.getRawBits());
}

bool    Fixed::operator==(const Fixed &operand) const
{
        return (this->getRawBits() ==  operand.getRawBits());
}

bool    Fixed::operator!=(const Fixed &operand) const
{
        return (this->getRawBits() != operand.getRawBits());
}

/*	ARITHMETIC OPERATORS	*/

Fixed	Fixed::operator+(const Fixed &operand)
{
	return (this->toFloat() + operand.toFloat());
}

Fixed   Fixed::operator-(const Fixed &operand)
{
	return (this->toFloat() - operand.toFloat());
}

Fixed   Fixed::operator*(const Fixed &operand)
{
	return (float)(this->toFloat() * operand.toFloat());
}

Fixed   Fixed::operator/(const Fixed &operand)
{
	return (this->toFloat() / operand.toFloat());
}

/*	IN/DECREMENTATION OPERATORS	*/

Fixed	&Fixed::operator++(void)
{
	this->rawBits++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->rawBits--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	sub(*this);
	this->rawBits++;
	return (sub);
}

Fixed	Fixed::operator--(int)
{
	Fixed	sub(*this);
	this->rawBits++;
	return (sub);
}

/*	MEMBERS FUNCTIONS	*/

std::ostream	&operator<<(std::ostream &out, Fixed const &obj)
{
	out << obj.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const
{
	return (this->rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->rawBits / (float)(1 << this->ffract));
}

int	Fixed::toInt(void) const
{
	if (this->rawBits < 0)
		return (int)(-1 * (-this->rawBits >> this->ffract));
	return (int)(this->rawBits >> this->ffract);
}

//////		MIN/MAX		///////

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}

Fixed const	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	return (a);
}
