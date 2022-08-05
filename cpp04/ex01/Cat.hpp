/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:16:42 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/05 12:39:47 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	Brain	*brain;

	public:
		Cat(void);
		Cat(const Cat &n);
		Cat	&operator=(const Cat &n);
		~Cat(void);

		void	makeSound(void) const;
		
		Brain	*getBrain(void) const;
		void	setBrain(Brain *);

		std::string	getIdeas(int);
		void		setIdeas(int, std::string);
};

std::ostream	&operator<<(std::ostream &, const Cat &);

#endif 
