/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:54:55 by mtellal           #+#    #+#             */
/*   Updated: 2022/09/02 11:13:36 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{

	public:
	
		MateriaSource(void);
		MateriaSource(const MateriaSource &);
		~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &);

		void		learnMateria(AMateria *);
		AMateria	*createMateria(std::string const &);

	private:

		AMateria *tab[4];
};

#endif

