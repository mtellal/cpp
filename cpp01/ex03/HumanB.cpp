/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:59:15 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 16:19:33 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) : name("HumanB"), w(NULL)
{
	std::cout << "HumanB " << name << " created" << std::endl;
}

HumanB::HumanB(std::string s) : name(s), w(NULL)
{
	std::cout << "HumanB " << name << " created" << std::endl;
}

HumanB::HumanB(const HumanB &source) : name(source.getName()), w(source.getWeapon())
{
	std::cout << "HumanB " << name << " created" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->name << " deleted" << std::endl;
}

HumanB	&HumanB::operator=(const HumanB &source)
{
	if (this != &source)
	{
		this->name = source.getName();
		this->w = source.getWeapon();
	}
	return (*this);
}

void	HumanB::attack()
{
	if (w)
		std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
	else
		std::cout << this->name << ": no weapon setted" << std::endl;
}

void	HumanB::setWeapon(Weapon &w)
{
	this->w = &w;
}

std::string	HumanB::getName(void) const
{
	return (this->name);	
}

Weapon		*HumanB::getWeapon(void) const
{
	return (this->w);
}