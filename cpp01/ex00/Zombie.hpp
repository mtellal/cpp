/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:35:53 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 15:02:38 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{

	public:
		
	Zombie(void);
	Zombie(const Zombie &);
	Zombie(std::string);
	~Zombie(void);
	Zombie &operator=(const Zombie &);

	void			announce( void );
	std::string		getName(void) const;

	private:

	std::string	name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
