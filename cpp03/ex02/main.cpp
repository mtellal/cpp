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

#include "FragTrap.hpp"

void	fragTrapInfo(const FragTrap &obj)
{
	std::cout << "FragTrap " << obj.getName() << " | hitPoints = " << obj.getHitPoints()
	<< " | energyPoints = " << obj.getEnergyPoints() << " | attackDamage = " << obj.getAttackDamage() << std::endl;
}

int main()
{
	FragTrap	a("A");

	std::cout << std::endl << "//////// CANONICAL TESTS ///////" << std::endl;

		FragTrap	tmp(a);

		fragTrapInfo(a);
		fragTrapInfo(tmp);
		a.takeDamage(5);
		a.attack("X");
		a.beRepaired(2);
		tmp = a;
		fragTrapInfo(tmp);
		fragTrapInfo(a);

	std::cout << std::endl;
	
	std::cout << "////////////	HITPOINTS TESTS		/////////" << std::endl;

		a.beRepaired(-5);
		fragTrapInfo(a);
		a.beRepaired(2);
		fragTrapInfo(a);
		a.takeDamage(4);
		fragTrapInfo(a);
		a.attack("X");
		a.beRepaired(5);
		a.takeDamage(5);

	std::cout << std::endl;
	
	std::cout << std::endl << "///////////	ENERGY POINTS		/////////" << std::endl;

	a.setHitPoints(1);
	a.setEnergyPoints(0);
	fragTrapInfo(a);
	a.attack("X");
	a.beRepaired(5);
	a.takeDamage(5);
	fragTrapInfo(a);

	std::cout << std::endl;

	a.highFivesGuys();

	std::cout << std::endl;
	
	return (0);
}
