/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:23:15 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/16 15:53:34 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	private:
		std::string	name;
		long		hit_points;
		long		energy_points;
		long		attack_dommage;
	public:
		FragTrap();
		FragTrap(const std::string n);
		FragTrap	&operator=(const FragTrap &n);
		~FragTrap();

		void	highFivesGuys(void);	
};

#endif
