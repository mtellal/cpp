/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:40:54 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 14:49:22 by mtellal          ###   ########.fr       */
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
		long		hitPoints;
		long		energyPoints;
		long		attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(const ClapTrap &);
		ClapTrap	&operator=(const ClapTrap &n);
		~ClapTrap(void);

		void	attack(const std::string &target);
		void	takeDommage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


#endif
