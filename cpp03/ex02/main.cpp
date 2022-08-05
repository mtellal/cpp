/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:37:30 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 09:25:21 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	ClapTrap	a("A");
	FragTrap	b("B");
	FragTrap	c;

	c = b;
	b.attack("A");
	a.attack("B");
	b.beRepaired(10);
	c.attack("B");
	c.takeDamage(50);
	c.highFiveGuys();	
	return (0);
}
