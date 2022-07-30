/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:31:48 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 17:36:33 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Amateria.hpp"

AMateria::AMateria(): type("AMateria")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

Amateria::AMateria(const std::string &type): type(type)
{
	std::cout << "AMateria parameter constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &n): type(n.type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

const std::string	&AMateria::getType() const
{
	return (type);
}

void			AMateria::use(ICharacter &target)
{

}
