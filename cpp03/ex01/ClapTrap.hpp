/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:40:54 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 16:35:19 by mtellal          ###   ########.fr       */
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
		ClapTrap(const ClapTrap &);
		ClapTrap(std::string);
		ClapTrap	&operator=(const ClapTrap &n);
		~ClapTrap(void);

		std::string	getName(void) const;
		long		getHitPoints(void) const;
		long		getEnergyPoints(void) const;
		long		getAttackDamage(void) const;

		void		setName(const std::string);
		void		setHitPoints(long);
		void		setEnergyPoints(long);
		void		setAttackDamage(long);

		virtual void	attack(const std::string &target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};


#endif
