/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:46:00 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 16:35:41 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called (ClapTrap)" << std::endl;
	name = 'X';
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 10;
}

ClapTrap::ClapTrap(const ClapTrap &source)
{
	std::cout << "Copy constructor called (ClapTrap)" << std::endl;
	name = source.name;
	hitPoints = source.hitPoints;
	energyPoints = source.energyPoints;
	attackDamage = source.attackDamage;
}

ClapTrap::ClapTrap(const std::string n) : name(n)
{
	std::cout << "Parameter Constructor called (ClapTrap)" << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 10;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called (ClapTrap)" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &n)
{
	std::cout << "Copy assignment called (ClapTrap)" << std::endl;
	if (this != &n)
		name = n.name;
	return (*this);
}

/*	GET / SETTERS	*/

std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

long	ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

long	ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

long	ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

void	ClapTrap::setName(const std::string n)
{
	this->name = n;
}

void	ClapTrap::setHitPoints(long hp)
{
	this->hitPoints = hp;
}

void	ClapTrap::setEnergyPoints(long ep)
{
	this->energyPoints = ep;
}

void	ClapTrap::setAttackDamage(long ad)
{
	this->attackDamage = ad;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->hitPoints > 0 && this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage 
			<< " points of dammage!" << std::endl;
		if (this->energyPoints > 0)
			this->energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
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

