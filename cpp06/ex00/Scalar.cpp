/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:14:59 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/16 18:27:32 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar(void)
{
}

Scalar::Scalar(std::string)
{
}

Scalar::Scalar(const Scalar &)
{
}

Scalar::~Scalar(void)
{
}

Scalar	&Scalar::operator=(const Scalar &)
{
	return (*this);
}

std::string	valueToPrint(int c)
{
	std::string	s;

	s = c;
	if (c >= 32 && c <= 126)
		return (s);
	else
		return ("Non displayable");
}

void	Scalar::handleConversion(char *s)
{
	if (isChar(s))
		convertChar(s);
	else if (isInt(s))
		convertInt(s);
	else if (isFloat(s))
		convertFloat(s);
	else if (isDouble(s))
		convertDouble(s);

}


