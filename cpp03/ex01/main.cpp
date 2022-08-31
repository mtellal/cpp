/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:37:30 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 15:40:06 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	scavTrapInfo(const ScavTrap &obj)
{
	std::cout << "ScavTrap " << obj.getName() << " | hitPoints = " << obj.getHitPoints()
	<< " | energyPoints = " << obj.getEnergyPoints() << " | attackDamage = " << obj.getAttackDamage() << std::endl;
}

int main()
{
	ScavTrap	a("A");

	std::cout << std::endl << "//////// CANONICAL TESTS ///////" << std::endl;

		ScavTrap tmp(a);

		scavTrapInfo(a);
		scavTrapInfo(tmp);
		a.takeDamage(5);
		a.attack("X");
		a.beRepaired(2);
		tmp = a;
		scavTrapInfo(tmp);
		scavTrapInfo(a);

	std::cout << std::endl;
	
	std::cout << "////////////	HITPOINTS TESTS		/////////" << std::endl;

		a.beRepaired(-5);
		scavTrapInfo(a);
		a.beRepaired(2);
		scavTrapInfo(a);
		a.takeDamage(4);
		scavTrapInfo(a);
		a.attack("X");
		a.beRepaired(5);
		a.takeDamage(5);

	std::cout << std::endl;
	
	std::cout << std::endl << "///////////	ENERGY POINTS		/////////" << std::endl;

	a.setHitPoints(1);
	a.setEnergyPoints(0);
	scavTrapInfo(a);
	a.attack("X");
	a.beRepaired(5);
	a.takeDamage(5);
	scavTrapInfo(a);
		
	a.guardGate();

	std::cout << std::endl << "///////// 	DIFF ATTACKS	///////////" << std::endl;

	{
		ClapTrap a;
		ScavTrap a2;
		
		a.attack("X");
		a2.attack("X");
	}

	std::cout << std::endl;

	return (0);
}
