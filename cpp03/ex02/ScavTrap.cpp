/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:02:58 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 16:36:32 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "Default constructor called (ScavTrap)" << std::endl;
	this->name = "ScavTrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source.name)
{
	std::cout << "Copy constructor called (ScavTrap)" << std::endl;
	this->hitPoints = source.hitPoints;
	this->energyPoints = source.energyPoints;
	this->attackDamage = source.attackDamage;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	std::cout << "Parameter constructor called (ScavTrap)" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called (Scavtrap)" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &source)
{
	if (this != &source)
	{
		this->name = source.name;
		this->hitPoints = source.hitPoints;
		this->energyPoints = source.energyPoints;
		this->attackDamage = source.attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->hitPoints> 0 && this->energyPoints > 0)
    {
                std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage
                        << " points of dammage!" << std::endl;
                if (this->energyPoints > 0)
                        this->energyPoints--;
	}
	else if (this->hitPoints <= 0)
		std::cout << "ScavTrap " << this->name << " is already dead" << std::endl;
	else if (this->energyPoints <= 0)
		std::cout << "ScavTrap " << this->name << " doesn't have emough energy" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->name << " entered in Gate keeper mode" << std::endl;
}
