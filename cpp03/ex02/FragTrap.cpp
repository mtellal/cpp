/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:15:11 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 17:37:55 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "Default constructor called (FragTrap)" << std::endl;
	this->setName("F");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &source) : ClapTrap(source.getName())
{
	std::cout << "Copy constructor called" << std::endl;
	this->setHitPoints(source.getHitPoints());
	this->setEnergyPoints(source.getEnergyPoints());
	this->setAttackDamage(source.getAttackDamage());
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	this->setName("F");
        this->setHitPoints(100);
        this->setEnergyPoints(100);
        this->setAttackDamage(30);
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destrcutor called (FragTrap)" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &source)
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

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Hello guys, high five ?" << std::endl;
}
