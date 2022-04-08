/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:35:53 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/08 17:43:28 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

	public:
		void	announce( void );
		std::string	name;
	
	Zombie()
	{
		name = "";
	}

	~Zombie()
	{
		std::cout << name << std::endl;
	}
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
