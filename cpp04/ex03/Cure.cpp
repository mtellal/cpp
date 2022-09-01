/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:36:38 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/07 10:53:43 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Default constructor called (Cure)" << std::endl;
}

Cure::Cure(const Cure &) : AMateria("cure")
{
	std::cout << "Parameter constructor called (Cure)" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Destructor called (Cure)" << std::endl;
}

Cure	&Cure::operator=(const Cure &)
{
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter &o)
{
	std::cout << "* heals " << o.getName() << "'s wounds *" << std::endl;
}
