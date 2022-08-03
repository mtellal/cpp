/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:35:53 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 15:29:09 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

	std::string	name;

	public:

	Zombie(void);
	Zombie(const Zombie &);
	~Zombie(void);
	Zombie &operator=(const Zombie &);

	void	announce( void );
	void	set_name(std::string);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
