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
	this->setName("S");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &source) : ClapTrap(source.getName())
{
	std::cout << "Copy constructor called (ScavTrap)" << std::endl;
	this->setHitPoints(source.getHitPoints());
	this->setEnergyPoints(source.getEnergyPoints());
	this->setAttackDamage(source.getAttackDamage());
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	std::cout << "Parameter constructor called (ScavTrap)" << std::endl;
	this->setHitPoints(100);
        this->setEnergyPoints(50);
        this->setAttackDamage(20);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Dstructor calledi (Scavtrap)" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &source)
{
	if (this != &source)
	{
		this->setName(source.getName());
		this->setHitPoints(source.getHitPoints());
		this->setEnergyPoints(source.getEnergyPoints());
		this->setAttackDamage(source.getAttackDamage());
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
        {
                std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage()
                        << " points of dammage!" << std::endl;
                if (this->getEnergyPoints() > 0)
                        this->setEnergyPoints(this->getEnergyPoints() - 1);
        }
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " entered in Gate keeper mode" << std::endl;
}
