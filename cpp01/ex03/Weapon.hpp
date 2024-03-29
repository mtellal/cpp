/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:34:28 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/31 15:52:47 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class	Weapon {

	public:
	
		Weapon(void);
		Weapon(const Weapon &);
		Weapon(std::string);
		~Weapon(void);
		Weapon	&operator=(const Weapon &);

		std::string			getType(void) const;
		void				setType(std::string);

	
	private:

		std::string	type;
};

#endif
