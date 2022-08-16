/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:14:59 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/16 14:59:53 by mtellal          ###   ########.fr       */
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

bool	isChar(char *s)
{
	int	i = 0;

	if (((s[i] >= 'A' && s[i] <= 'Z') 
			|| (s[i] <= 'z' && s[i] >= 'a'))
			&& !s[i + 1])
			return (true);
	return (false);
}

bool	isInt(char *s)
{
	int	i = 0;

	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (false);
		i++;
	}
	if (!s[i] && i <= 10)
		return (true);	
	return (false);
}

bool	isFloat(char *s)
{
	int	i = 0;
	int	nbPoint = 0;

	while (s[i] && s[i] != 'f')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			if (s[i] == '.')
				nbPoint++;
			else
				return (false);
		}
		i++;	
	}
	if (!s[i] || nbPoint > 1)
		return (false);
	if (s[i] == 'f' && !s[i + 1] && i <= 57)
		return (true);
	return (false);
}

bool	isDouble(char *s)
{
	int	i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (false);
		i++;
	}
	if (!s[i] && i <= 327)
		return (true);
	return (false);
}

void	Scalar::handleConversion(char *s)
{
	if (isChar(s))
		convertChar(s);
	if (isInt(s))
		convertInt(s);
		/*if (isFloat(s))
		this->convertFloat(s);
	if (isDouble(s))
		this->convertDouble(s);
*/
}


