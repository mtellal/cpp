/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:42:38 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 10:59:46 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fbits = 8;

Fixed::Fixed(void)
{
	value = 0;
}

Fixed::Fixed(const int i)
{
	value = i << fbits;
}

Fixed::Fixed(const float i)
{
	value = (float)round(i * (1 << fbits));
}

Fixed::Fixed(const Fixed &source)
{
	value = source.value;
}

Fixed::~Fixed(void) {}

Fixed	&Fixed::operator=(const Fixed &source)
{
	if (this != &source)
	{
		value = source.value;
	}
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
	return (this->toFloat() * operand.toFloat());
}

Fixed   Fixed::operator/(const Fixed &operand)
{
	return (this->toFloat() / operand.toFloat());
}

/*	IN/DECREMENTATION OPERATORS	*/

Fixed	&Fixed::operator++(void)
{
	this->value++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	sub(*this);
	this->value++;
	return (sub);
}

Fixed	Fixed::operator--(int)
{
	Fixed	sub(*this);
	this->value++;
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
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << this->fbits));
}

int	Fixed::toInt(void) const
{
	if (this->value < 0)
		return (int)(-1 * (-this->value >> this->fbits));
	return (int)(this->value >> this->fbits);
}

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


