/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:41:54 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/16 15:11:43 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): name("XX"), hit_points(100), energy_points(150), attack_dommage(20)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string n): ClapTrap(n), name(n), hit_points(100), energy_points(50), attack_dommage(20)
{
	std::cout << "ScavTrap parameters constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &n)
{
	std::cout << "ScavTrap copy assignment called" << std::endl;
	if (this != &n)
	{
		ClapTrap::operator=(n);
		name = n.name;
		hit_points = n.hit_points;
		energy_points = n.energy_points;
		attack_dommage = n.attack_dommage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << name << " scavTrap Gate keeper activated" << std::endl;
}

