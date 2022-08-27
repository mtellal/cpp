/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:19:38 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 15:28:34 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
        Zombie  *z;
        int     i;
 
        i = 0;
        if (N <= 0)
        {
                std::cout << "wrong number of zombies" << std::endl;
                return (NULL);
        }
        z = new Zombie[N];
        while (i < N)
                z[i++].set_name(name);
        return (z);
}

