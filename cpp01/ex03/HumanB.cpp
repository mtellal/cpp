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

HumanB::HumanB(void)
{
	name = "HumanB";
	std::cout << "HumanB " << name << " created" << std::endl;
}

HumanB::HumanB(std::string s)
{
	name = s;
	std::cout << "HumanB " << name << " created" << std::endl;
}

HumanB::HumanB(const HumanB &source)
{
	name = source.name;
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
		this->name = source.name;
		this->w = source.w;
	}
	return (*this);
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their " << this->w->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon *w)
{
	this->w = w;
}
