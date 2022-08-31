/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:37:30 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 14:18:21 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	clapTrapInfo(const ClapTrap &obj)
{
	std::cout << "ClapTrap " << obj.getName() << " | hitPoints = " << obj.getHitPoints()
	<< " | energyPoints = " << obj.getEnergyPoints() << " | attackDamage = " << obj.getAttackDamage() << std::endl;
}

int main()
{
	ClapTrap	a("A");

	std::cout << std::endl << "//////// CANONICAL TESTS ///////" << std::endl;

		ClapTrap tmp(a);

		clapTrapInfo(a);
		clapTrapInfo(tmp);
		a.takeDamage(5);
		a.attack("X");
		a.beRepaired(2);
		tmp = a;
		clapTrapInfo(tmp);
		clapTrapInfo(a);

	std::cout << std::endl;
	
	std::cout << "////////////	HITPOINTS TESTS		/////////" << std::endl;

		a.beRepaired(-5);
		clapTrapInfo(a);
		a.beRepaired(2);
		clapTrapInfo(a);
		a.takeDamage(4);
		clapTrapInfo(a);
		a.attack("X");
		a.beRepaired(5);
		a.takeDamage(5);

	std::cout << std::endl;
	
	std::cout << std::endl << "///////////	ENERGY POINTS		/////////" << std::endl;

	a.setHitPoints(1);
	a.setEnergyPoints(0);
	clapTrapInfo(a);
	a.attack("X");
	a.beRepaired(5);
	a.takeDamage(5);
	clapTrapInfo(a);
		
	std::cout << std::endl;

	return (0);
}
