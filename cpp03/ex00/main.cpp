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

int main()
{
	ClapTrap	a("A");
	ClapTrap	b("B");
	ClapTrap	c;


	a.attack("B");
	b.attack("X");
	b.attack("A");
	c = b;
	c.attack("A");
	a.takeDommage(999);
	a.beRepaired(2);
	
	return (0);
}
