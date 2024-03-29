/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:58:11 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 14:19:34 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	public:
	
		Dog(void);
		Dog(const Dog &n);
		Dog	&operator=(const Dog &n);
		virtual ~Dog(void);
		
		virtual void	makeSound(void) const;
		Brain			*getBrain(void) const;

		std::string		getIdea(unsigned int) const;
		void			setIdea(unsigned int, std::string);

	private:

		Brain *brain;
};

#endif
