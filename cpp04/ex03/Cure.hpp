/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 15:37:01 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/05 17:20:34 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:

	Cure(void);
	Cure(const Cure &);
	~Cure(void);
	Cure	&operator=(const Cure &);
	
	AMateria* clone(void) const;
	void	use(ICharacter &);
};

#endif
