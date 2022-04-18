/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:13:08 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 15:24:27 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class	Brain
{
	protected:
		std::string	ideas[100];	
	public:
		Brain();
		Brain(const Brain &n);
		Brain	&operator=(const Brain &n);
		virtual ~Brain();

		virtual void	setIdeas(unsigned int index, std::string newIdeas);
		virtual std::string	getIdeas(unsigned int index) const;
		// display number ideas
		virtual	void		displayAnimalIdeas(unsigned int number) const;
		// set X ideas (%1 -> "manger", %2 -> "dormir", %3 -> "jouer")
		virtual	void		setAnimalIdeas(unsigned int numbe);
};


#endif
