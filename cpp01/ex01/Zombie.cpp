/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:29:25 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 15:29:05 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	name = "";
	std::cout << "Zombie created" << std::endl;
}

Zombie::Zombie(const Zombie &source)
{
	name = source.name;
	std::cout << "Zombie " << name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " deleted" << std::endl;
}

Zombie	&Zombie::operator=(const Zombie &source)
{
	if (this != &source)
	{
		this->name = source.name;
	}
	return (*this);
}

void    Zombie::announce(void)
{
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string n)
{
	this->name = n;
}
