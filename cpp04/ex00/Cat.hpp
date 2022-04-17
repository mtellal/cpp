/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:16:42 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/17 15:28:38 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat &n);
		Cat	&operator=(const Cat &n);
		~Cat();

		void	makeSound(void) const;
};

#endif 
