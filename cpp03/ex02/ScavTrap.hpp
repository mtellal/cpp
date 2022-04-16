/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:42:15 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/16 14:59:17 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAV_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	private:
		std::string	name;
		long		hit_points;
		long		energy_points;
		long		attack_dommage;
	public:
		ScavTrap();
		ScavTrap(const std::string n);
		ScavTrap	&operator=(const ScavTrap &n);
		~ScavTrap();
		
		void	guardGate();
};

#endif
