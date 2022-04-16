/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:29:09 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/16 15:57:03 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): name("XXX"), hit_points(100), energy_points(100), attack_dommage(30)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string n): ClapTrap(n), name(n), hit_points(100), energy_points(100), attack_dommage(30)
{
	std::cout << "FragTrap parameters constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &n)
{
	std::cout << "FragTrap assignement operator called" << std::endl;
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap highFivesGuys function members calle" << std::endl;
	std::cout << "High fives guys ?";
}
