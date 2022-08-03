/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:11:02 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 15:10:23 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*z1;
	Zombie	z2("z2");


	z1 = newZombie("z1");
	z1->announce();
	std::cout << std::endl;
	
	z2.announce();
	std::cout << std::endl;

	z2 = *(z1);
	z2.announce();
	std::cout << std::endl;

	randomChump("z3");
	std::cout << std::endl;

	delete z1;
}
