/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:42:48 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 18:01:28 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	public:

		HumanA(std::string, Weapon &);
		HumanA(const HumanA &);
		~HumanA(void);
		HumanA	&operator=(const HumanA &);

		void	attack();

		const std::string 	&getName(void) const;
		Weapon				&getWeapon(void) const;

	private:

		std::string name;
		Weapon		&w;
};

#endif

