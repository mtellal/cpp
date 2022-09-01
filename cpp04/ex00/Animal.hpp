/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:23:42 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/31 14:41:47 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class	Animal
{

	public:

		Animal(void);
		Animal(const Animal &n);
		Animal(std::string);
		Animal	&operator=(const Animal &n);
		virtual ~Animal(void);

		std::string		getType() const;
		virtual void	makeSound(void) const;


	protected:

		std::string	type;
};

std::ostream	&operator<<(std::ostream &o, const Animal &n);

#endif
