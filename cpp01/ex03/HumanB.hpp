/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:57:00 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/09 18:59:44 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string n)
		{
			name = n;
		}
		void	attack();
		void	setWeapon(Weapon *w);
		std::string	name;
		Weapon		*weapon;
};

#endif
