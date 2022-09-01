/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:56:54 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/07 10:53:59 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	std::cout << "Default constructor called (Ice)" << std::endl;
}

Ice::Ice(const Ice &): AMateria("ice")
{
	std::cout << "Parameter constructor called (Ice)" << std::endl;
}

Ice	&Ice::operator=(const Ice &)
{
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Destructor called (Ice)" << std::endl;
}

AMateria*	Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

