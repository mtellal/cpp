/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:41:19 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/17 17:12:10 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const std::string &n);
		WrongAnimal(const WrongAnimal &n);
		WrongAnimal	&operator=(const WrongAnimal &n);
		~WrongAnimal();

		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif
