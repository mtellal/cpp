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
}

AMateria::AMateria(const std::string &type): type(type)
{
}

AMateria::AMateria(const AMateria &n): type(n.getType())
{
}

AMateria::~AMateria(void)
{
}

AMateria	&AMateria::operator=(const AMateria &source)
{
	if (this != &source)
	{
		this->type = source.getType();
	}
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
	return ;
}
