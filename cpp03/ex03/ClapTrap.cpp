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

ClapTrap::ClapTrap(void) : 
name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &s) :
name(s.name), hitPoints(s.hitPoints), energyPoints(s.energyPoints),
attackDamage(s.attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string s) : 
name(s), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Parameter constructor called" << std::endl;
}
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &s)
{
	std::cout << "Copy assignment called" << std::endl;
	if (this != &s)
	{
		this->name = s.name;
		this->hitPoints = s.hitPoints;
		this->energyPoints = s.energyPoints;
		this->attackDamage = s.attackDamage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	std::string	errors;

	errors = checkClapTrap();
	if (!errors.empty())
	{
		std::cout << "ClapTrap "  << this->name << errors << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage 
		<< " points of dammage!" << std::endl;
	if (this->energyPoints > 0)
		this->energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << "ClapTrap "  << this->name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap "  << this->name << " has taken " << amount << " dammage points" << std::endl;
	this->hitPoints > amount ? this->hitPoints -= amount : this->hitPoints = 0;
	std::cout << "ClapTrap "  << this->name << " have " << this->hitPoints << " hit points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::string	errors;

	errors = checkClapTrap();
	if (!errors.empty())
	{
		std::cout << "ClapTrap "  << this->name << errors << std::endl;
		return ;
	}
	std::cout << "ClapTrap "  << this->name << " healed of " << amount << std::endl;
	std::cout << "ClapTrap "  << this->name << " current hit points is " << this->hitPoints + amount << std::endl;
	this->hitPoints += amount;
	if (this->energyPoints > 0)
		this->energyPoints--;
}

std::string	ClapTrap::checkClapTrap(void) const
{
	if (!this->hitPoints)
		return (" is already dead");
	else if (!this->energyPoints)
		return (" doesn't have enough energy");
	return ("");
}

/////////////		GETTERS		//////////

std::string		ClapTrap::getName(void) const
{
	return (this->name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

//////////////		SETTERS		///////

void			ClapTrap::setName(std::string s)
{
	this->name = s;
}

void			ClapTrap::setHitPoints(unsigned int i)
{
	this->hitPoints = i;
}

void			ClapTrap::setEnergyPoints(unsigned int i)
{
	this->energyPoints = i;
}

void			ClapTrap::setAttackDamage(unsigned int i)
{
	this->attackDamage = i;
}