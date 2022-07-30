/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:56:54 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 18:05:48 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.cpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &n): AMateria("ice")
{
	std::cout << "Ice copy constrcutor called" << std::endl;
}

Ice	&Ice::operator(const Ice &n)
{
	std::cout << "Ice assignement operator called" << std::endl;
	if (this != &n)
	{
		type = n.type;
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria*	Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at <name>"
}
