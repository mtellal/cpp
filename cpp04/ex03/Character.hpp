/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:00:31 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/05 20:52:29 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class	Character : public ICharacter
{
	AMateria	*items[4];
	std::string	name;

	public:

	Character(void);
	Character(const Character &);
	Character(std::string);
	~Character(void);
	Character	&operator=(const Character &);


	std::string const & getName(void) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

	AMateria	*getItems(int) const;
};

#endif 
