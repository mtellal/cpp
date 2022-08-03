/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:46:55 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 18:01:22 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon &a) : w(a)
{
	name = s;
	std::cout << "HumanA " << name << " created" << std::endl;
}

HumanA::HumanA(const HumanA &source) : w(source.w)
{
	name = source.name;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->name << " deleted" << std::endl;
}

HumanA	&HumanA::operator=(const HumanA &source)
{
	if (this != &source)
	{
		this->name = source.name;
		this->w = source.w;
	}
	return (*this);
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->w.getType() << std::endl;
}
