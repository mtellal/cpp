/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:50:14 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 18:04:33 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class	Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice &n);
		Ice	&operator(const Ice &n);
		~Ice();

		AMateria*	clone() const;
		void		use(ICharacter &target);	
}


#endif
