/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:42:48 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/16 21:27:28 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

void	printChar(double i)
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

void	printInt(double i)
{
	std::cout << "int: ";
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(i);
	std::cout << std::endl;
}

void	printFloat(double i)
{
	std::cout << "float: ";
	if (i < -FLT_MAX || i > FLT_MAX)
		std::cout << "impossible";
	else
		std::cout << static_cast<float>(i) << "f";
	std::cout << std::endl;
}

void	printDouble(double i)
{
	std::cout << "double: " << i << std::endl;
}

void    convertChar(char *str)
{
        char    var;

        var = str[0];
        printChar(var);
	printInt(var);
        printFloat(var);
	std::cout << "double: " << static_cast<double>(var) << std::endl;

}

void    convertInt(char *str)
{
        int             var;

        var = std::atoi(str);
        printChar(var);
	printInt(var);
        printFloat(var);
	std::cout << "double: " << static_cast<double>(var) << std::endl;

}

void    convertFloat(char *str)
{
        float           var;

        var = std::stof(str);
        printChar(var);
	printInt(var);
	printFloat(var);
        std::cout << "double: " << static_cast<double>(var) << std::endl;

}

void    convertDouble(char *str)
{
        double           var;


        var = std::stod(str);
	printChar(var);
	printInt(var);
	printFloat(var);
        std::cout << "double: " << var << std::endl;
}
