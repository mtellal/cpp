/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:58:11 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/05 10:41:32 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	Brain	*brain;

	public:
		Dog(void);
		Dog(const Dog &n);
		Dog	&operator=(const Dog &n);
		~Dog(void);
		
		void	makeSound(void) const;
		
		Brain	*getBrain(void) const;
		void	setBrain(Brain *);

		std::string	getIdeas(int);
		void		setIdeas(int, std::string);
};

#endif
