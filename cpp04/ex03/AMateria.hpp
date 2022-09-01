/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:26:53 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/05 17:40:41 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class	AMateria
{
	protected:
		
		std::string	type;
	
	public:
	
		AMateria(void);	
		AMateria(std::string const &type);
		AMateria(const AMateria &n);
		virtual ~AMateria(void);
		AMateria	&operator=(const AMateria &);

		std::string const &getType(void) const;
		
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter &);
		

};

#endif

