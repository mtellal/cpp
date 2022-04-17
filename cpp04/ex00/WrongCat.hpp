/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:52:24 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/17 17:13:42 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &n);
		WrongCat	&operator=(const WrongCat &n);
		~WrongCat();

		void	makeSound() const;
};

#endif
