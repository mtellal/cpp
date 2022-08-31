/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:15:11 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 09:28:13 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default constructor called (FragTrap)" << std::endl;
	this->name = "FragTrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &source) : ClapTrap()
{
	std::cout << "Copy constructor called (FragTrap)" << std::endl;
	this->name = source.name;
	this->hitPoints = source.hitPoints;
	this->energyPoints = source.energyPoints;
	this->attackDamage = source.attackDamage;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	std::cout << "Parameter constructor called (FragTrap)" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destrcutor called (FragTrap)" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &source)
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

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << ": Hello guys, high five ?" << std::endl;
}
