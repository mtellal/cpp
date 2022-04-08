/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:34:28 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/08 20:47:21 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class	Weapon {

	public:
		const std::string	&getType(std::string type);
		void			setType(std::string n);
	private:
		std::string type;
};

#define
