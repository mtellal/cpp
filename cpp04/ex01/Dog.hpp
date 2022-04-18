/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:58:11 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 15:14:51 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	private:
		Brain*	cerveau;
	public:
		Dog(void);
		Dog(const Dog &n);
		Dog	&operator=(const Dog &n);
		~Dog(void);
		
		void		makeSound(void) const;
		void		dogFunction(void) const;
	
		void    	setIdeas(unsigned int index, std::string newIdeas);
                std::string     getIdeas(unsigned int index) const;
		
		void		setAnimalIdeas(unsigned int number);
		void		displayAnimalIdeas(unsigned int number) const;
};	

#endif
