/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:16:42 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 09:52:16 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat &n);
		Cat	&operator=(const Cat &n);
		virtual ~Cat(void);

		virtual void	makeSound(void) const;
		Brain			*getBrain(void) const;

		std::string		getIdea(unsigned int i) const;
		void			setIdea(unsigned int i, std::string);

	private:

		Brain *brain;
};

#endif 
