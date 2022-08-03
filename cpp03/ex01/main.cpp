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

int main()
{
	ClapTrap	a("A");
	ScavTrap	b("B");
	ScavTrap	c;

	c = b;
	b.attack("A");
	a.attack("B");
	b.beRepaired(10);
	c.attack("B");
	c.takeDamage(50);
	c.guardGate();	
	return (0);
}
