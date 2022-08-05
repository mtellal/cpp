/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:23:42 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 14:07:15 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class	Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(const Animal &n);
		Animal(std::string);
		Animal	&operator=(const Animal &n);
		virtual ~Animal(void);

		std::string	getType() const;
		virtual void	makeSound(void) const;
};

std::ostream	&operator<<(std::ostream &o, const Animal &n);

#endif
