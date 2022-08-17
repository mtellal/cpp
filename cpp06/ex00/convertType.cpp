/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:42:48 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/17 10:23:16 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

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
	if (i < -FLT_MAX + 1 || i > FLT_MAX)
		std::cout << "impossible";
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

double	Scalar::extractChar(char *str)
{
	return (str[0]);
}

double	Scalar::extractInt(char *str)
{
        int             var;

        var = std::atoi(str);
	return (static_cast<double>(var));
}

double	Scalar::extractFloat(char *str)
{
        float           var;

        var = std::stof(str);
	return (static_cast<double>(var));
}

double	Scalar::extractDouble(char *str)
{
        double           var;

        var = std::stod(str);
	return (var);
}

void	Scalar::display(double var)
{
	this->printChar(var);
	this->printInt(var);
	this->printFloat(var);
	this->printDouble(var);
}

