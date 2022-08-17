/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:14:59 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/17 10:09:43 by mtellal          ###   ########.fr       */
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
	double	var;

	if (isChar(s))
		var = extractChar(s);
	else if (isInt(s))
		var = extractInt(s);
	else if (isFloat(s))
		var = extractFloat(s);
	else if (isDouble(s))
		var = extractDouble(s);
	else if (isException(s))
		return (printException());
	else
	{
		std::cout << "unknow type" << std::endl;
		return ;
	}
		display(var);
}


