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

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a;


	std::cout << "///////	CANONICAL TESTS		//////////" << std::endl << std::endl;

	{
		DiamondTrap b(a);
		DiamondTrap c;
	
		std::cout << std::endl;
		a.whoAmi();
		b.whoAmi();
		c = a;
		c.whoAmi();
		std::cout << std::endl;
	}
	
	std::cout << std::endl;

	a.attack("X");
	a.takeDamage(5);
	a.beRepaired(5);
	a.guardGate();
	a.highFivesGuys();

	std::cout << std::endl;

}