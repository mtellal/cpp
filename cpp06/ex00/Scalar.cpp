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

///////////////////		CHECK TYPE		////////////


bool    Scalar::isChar(std::string s)
{
	if (s[0] >= 0 && !s[1] && (s[0] < '0' || s[0] > '9'))
			return (true);
	return (false);
}

bool    Scalar::isInt(std::string s)
{
	int    	i = 0;
	long    a;

	if (s[i] == '-' || s[i] == '+')
			i++;
	while (s[i])
	{
			if (s[i] < '0' || s[i] > '9')
					return (false);
			i++;
	}
	a = strtol(s.c_str(), NULL, 10);
	if (!s[i] && i <= 11 && (a <= INT_MAX && a >= INT_MIN))
			return (true);
	return (false);
}

bool    Scalar::isFloat(std::string s)
{
	int     	i = 0;
	int     	nbPoint = 0;
	double		f;

	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] && s[i] != 'f')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			if (s[i] == '.' && s[i + 1])
				nbPoint++;
			else
				return (false);
		}
		i++;
	}
	if (s[i] == 'f' && !s[i + 1] && nbPoint <= 1)
	{
		f = strtod(s.c_str(), NULL);
		if (f >= -FLT_MAX && f <= FLT_MAX)
			return (true);
		else
			return (false);
	}
	return (false);
}

bool    Scalar::isDouble(std::string s)
{
	int     i = 0;
	int     nbPoint = 0;

	if (s[i] == '-' || s[i] == '+')
			i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			if (s[i] == '.' && s[i + 1])
				nbPoint++;
			else
				return (false);
		}
		i++;
	}
	if (!s[i] && i <= 327 && nbPoint <= 1)
		return (true);
	return (false);
}

bool	Scalar::isException(std::string str)
{
	std::string	tab[3] = {"-inf", "+inf", "nan"};
	int		i = 0;

	while (i < 3)
	{
		if (str == tab[i] || str == tab[i] + "f")
		{
			this->exception = tab[i];
			return (true);
		}
		i++;
	}
	return (false);
}

/////////////////////		EXTRACT ORIGINAL TYPE		/////////////////////

double	Scalar::extractChar(std::string str)
{
	return (static_cast<double>(str[0]));
}

double	Scalar::extractInt(std::string str)
{
    int             var;

    var = atoi(str.c_str());
	return (static_cast<double>(var));
}

double	Scalar::extractFloat(std::string str)
{
    float           var;

    var = strtof(str.c_str(), NULL);
	return (static_cast<double>(var));
}

double	Scalar::extractDouble(std::string str)
{
	double           var;

	var = strtod(str.c_str(), NULL);
	return (var);
}

/////////////////////////		PRINT TYPES		///////////////

void	Scalar::printChar(double i)
{
	std::cout << "char: ";
	if (i >= 33 && i <= 126)
		std::cout << static_cast<char>(i);
	else if (i > 127 || i < 0)
		std::cout << "impossible";
	else
		std::cout << "non displayable";
	std::cout << std::endl;
}

void	Scalar::printInt(double i)
{
	std::cout << "int: ";
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(i);
	std::cout << std::endl;
}
 
void	Scalar::printFloat(double i)
{
	std::cout << "float: ";
	if (i > FLT_MAX)
		std::cout << "+inff";
	else if (i < -FLT_MAX)
		std::cout << "-inff";
	else
		std::cout << static_cast<float>(i) << "f";
	std::cout << std::endl;
}

void	Scalar::printDouble(double i)
{
	std::cout << "double: " << i << std::endl;
}

void	Scalar::printException(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossbile" << std::endl;
	std::cout << "float: " << this->exception << "f" << std::endl;
	std::cout << "double: " << this->exception << std::endl;
}


void	Scalar::display(double var)
{
	this->printChar(var);
	this->printInt(var);
	this->printFloat(var);
	this->printDouble(var);
}

void	Scalar::handleConversion(std::string s)
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


