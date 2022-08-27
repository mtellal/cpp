/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:36:14 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 16:42:55 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : type("WeaponType")
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::Weapon(std::string s) : type(s)
{
	std::cout << "Weapon " << s << " created" << std::endl;
}

Weapon::Weapon(const Weapon &source) : type(source.getType())
{
	std::cout << "Weapon " << type << " created" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon " << this->type << " deleted" << std::endl;
}

Weapon	&Weapon::operator=(const Weapon &source)
{
	if (this != &source)
	{
		this->type = source.getType();
	}
	return (*this);
}

std::string		Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
