/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:34:28 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/09 18:44:52 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class	Weapon {

	public:
		const std::string	&getType();
		void			setType(std::string n);

		Weapon()
		{}
		Weapon(std::string t = "")
		{
			type = t;
		}

	private:
		std::string type;
};

#endif
