/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:26:53 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 17:30:24 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <stding>

class	AMateria
{
	protected:
		const std::string	type;
	public:
		AMateria(std::string const &type);
		AMateria();
		AMateria(const AMateria &n);
		~AMateria();

		std::string const &getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
}


#endif

