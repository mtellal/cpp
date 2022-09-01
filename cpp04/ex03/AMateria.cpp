/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:31:48 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/07 10:53:27 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("AMateria")
{
	std::cout << "Default constructor called (AMateria)" << std::endl;
}

AMateria::AMateria(const std::string &type): type(type)
{
	std::cout << "Parameter constructor called (AMateria)" << std::endl;
}

AMateria::AMateria(const AMateria &n): type(n.type)
{
	std::cout << "Copy constructor called (AMateria)" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "Destructor called (AMateria)" << std::endl;
}

AMateria	&AMateria::operator=(const AMateria &source)
{
	if (this != &source)
	{
		this->type = source.type;
	}
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << " use " << this->type << " (AMateria)" << std::endl;
}
