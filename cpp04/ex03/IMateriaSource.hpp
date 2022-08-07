/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:50:33 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/06 14:16:32 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class	IMateriaSource
{

	public:

		virtual ~IMateriaSource(void) {}
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria *createMateria(std::string const &) = 0;
};

#endif
