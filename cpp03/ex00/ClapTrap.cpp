/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:46:00 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 14:50:45 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	name = 'X';
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 10;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;
}

ClapTrap::ClapTrap(const std::string n) : name(n)
{
	std::cout << "Parameter Constructor called" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 10;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &n)
{
	std::cout << "Copy assignment calle" << std::endl;
	if (this != &n)
		name = n.name;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage 
			<< " points of dammage!" << std::endl;
		if (this->energyPoints > 0)
			this->energyPoints--;
	}
}

void	ClapTrap::takeDommage(unsigned int amount)
{
	std::cout << this->name << " has taken " << amount << " dammage points" << std::endl;
	std::cout << name << " have " << this->hitPoints - amount << " hit points" << std::endl;
	this->hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " healed of " << amount << std::endl;
	std::cout << this->name << " current hit points is " << this->hitPoints + amount << std::endl;
	this->hitPoints += amount;
	if (this->energyPoints > 0)
		this->energyPoints--;
}

