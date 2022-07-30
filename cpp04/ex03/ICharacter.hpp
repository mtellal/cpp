/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:12:52 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 18:16:24 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class	ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getNmae() const = 0;
		virtual void equip(Amateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter target) = 0;
}

#endif
