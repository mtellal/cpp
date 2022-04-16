/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:40:54 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/15 18:34:34 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class	ClapTrap
{
	private:
		std::string	name;
		long		hit_points;
		long		energy_points;
		long		attack_dommage;

	public:
		ClapTrap();
		ClapTrap(std::string n);
		ClapTrap	&operator=(const ClapTrap &n);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDommage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif
