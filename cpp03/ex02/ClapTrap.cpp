/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:46:00 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/16 14:51:21 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("X"), hit_points(10), energy_points(10), attack_dommage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string n): name(n), hit_points(10), energy_points(10), attack_dommage(0)
{
	std::cout << "Parameter Constructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &n)
{
	std::cout << "Copy assignment calle" << std::endl;
	if (this != &n)
		name = n.name;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (hit_points > 0 && energy_points > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_dommage << " points of dammage!" << std::endl;
	}
}

void	ClapTrap::takeDommage(unsigned int amount)
{
	std::cout << "takeDommage function member called" << std::endl;
	std::cout << name << " has taken " << amount << " dammage points" << std::endl;
	std::cout << name << " have " << (hit_points - amount) << " hit points" << std::endl;
	hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "beRepaired function member called" << std::endl;
	std::cout << name << " healed of " << amount << std::endl;
	std::cout << name << " current hit points is " << hit_points + amount << std::endl;
	hit_points += amount;
}



