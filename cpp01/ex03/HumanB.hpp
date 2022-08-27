/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:57:00 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 16:18:26 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
	
		HumanB(void);
		HumanB(std::string);
		HumanB(const HumanB &);
		~HumanB(void);
		HumanB	&operator=(const HumanB &);


		void	attack();
		void	setWeapon(Weapon &w);

		std::string			getName(void) const;
		Weapon				*getWeapon(void) const;

	private:

		std::string	name;
		Weapon		*w;
};

#endif
