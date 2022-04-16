/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:36:20 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/14 17:06:17 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	f = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &n)
{
	f = n.f;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &n)
{
	std::cout << "Copy assignement operator called" << std::endl;
	f = n.f;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout <<"Destructor called" << std::endl;
}

int	Fixed::getRawBits(void )
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->f);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->f = raw;
}
