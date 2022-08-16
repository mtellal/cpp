/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isType.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:42:48 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/16 14:52:34 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

void    convertChar(char *str)
{
        char    var;

        var = str[0];
        std::cout << "char: " << valueToPrint(var) << std::endl;
        std::cout << "int: " << static_cast<int>(var) << std::endl;
        std::cout << "float: " << static_cast<float>(var) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(var) << std::endl;

}

void    convertInt(char *str)
{
        int             var;

        var = std::atoi(str);
        std::cout << "char: " << valueToPrint(static_cast<char>(var)) << std::endl;
        std::cout << "int: " << var << std::endl;
        std::cout << "float: " << static_cast<float>(var) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(var) << std::endl;

}

void    convertFloat(char *str)
{
        float           var;

        var = std::stof(str);
        std::cout << "char: " << valueToPrint(static_cast<char>(var)) << std::endl;
        std::cout << "int: " << static_cast<int>(var) << std::endl;
        std::cout << "float: " << var << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(var) << std::endl;

}

void    convertDouble(char *str)
{
        double           var;

        var = std::stod(str);
        std::cout << "char: " << static_cast<char>(var) << std::endl;
        std::cout << "int: " << static_cast<int>(var) << std::endl;
        std::cout << "float: " << static_cast<float>(var) << "f" << std::endl;
        std::cout << "double: " << var << std::endl;

}

