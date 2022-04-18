/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:16:42 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 15:20:00 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	private:
		Brain*	cerveau;
	public:
		Cat(void);
		Cat(const Cat &n);
		Cat	&operator=(const Cat &n);
		~Cat();

		void		makeSound(void) const;
		
		std::string	getIdeas(unsigned int index) const;
		void		setIdeas(unsigned int index, std::string idee);

		void		displayAnimalIdeas(unsigned int number) const;
		void		setAnimalIdeas(unsigned int number);
};

#endif 
