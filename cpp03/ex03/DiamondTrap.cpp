/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:12:18 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 17:37:14 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout << "Constructor called (DiamondTrap)" << std::endl;
    this->name = "DiamondTrap";
    ::ClapTrap::name = ::ClapTrap::name + "_clap_name";
    this->hitPoints = ::FragTrap::hitPoints;
    this->energyPoints = ::ScavTrap::energyPoints;
    this->attackDamage = ::FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &source) : ClapTrap(),  FragTrap(), ScavTrap()
{
    std::cout << "Copy constructor called (DiamondTrap)" << std::endl;
    this->name = source.name;
    ::ClapTrap::name = source.ClapTrap::name;
    this->hitPoints = source.FragTrap::hitPoints;
    this->energyPoints = source.ScavTrap::energyPoints;
    this->attackDamage = source.FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string s) : ClapTrap(), FragTrap(), ScavTrap()
{
    std::cout << "Parameter constructor called (DiamondTrap)" << std::endl;
    this->name = s;
    ::ClapTrap::name = ::ClapTrap::name + "_clap_name";
    this->hitPoints = ::FragTrap::hitPoints;
    this->energyPoints = ::ScavTrap::energyPoints;
    this->attackDamage = ::FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Destructor called (DiamondTrap)" << std::endl;    
}

DiamondTrap     &DiamondTrap::operator=(const DiamondTrap &source)
{
    if (this != &source)
    {
        this->name = source.name;
        ::ClapTrap::name = source.ClapTrap::name;
        this->hitPoints = source.FragTrap::hitPoints;
        this->energyPoints = source.ScavTrap::energyPoints;
        this->attackDamage = source.FragTrap::attackDamage;
    }
    return (*this);
}

void    DiamondTrap::whoAmi(void)
{
    std::cout << "DiamondTrap name = " << this->name << " | ClapTrap name = " << this->ClapTrap::name << std::endl;
}