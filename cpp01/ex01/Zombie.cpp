/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:29:25 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/08 18:32:56 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
        std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*z;
	int	i;

	i = 0;
	z = new Zombie[N];
	while (i < N)
	{
		z[i].name = name;
		i++;
	}
	return (z);
}
