/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:14:43 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/05 11:38:55 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>


class	Brain
{
	std::string	ideas[100];

	public:

	Brain(void);
	Brain(const Brain &);
	~Brain(void);
	Brain	&operator=(const Brain &);

	std::string	getIdeas(int) const;
	void		setIdeas(int, std::string);
	
	void		copyBrain(Brain *);
};

#endif 
