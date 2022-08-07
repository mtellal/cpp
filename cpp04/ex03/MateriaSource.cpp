/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 14:01:16 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/07 10:52:52 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void	initTabMateria(AMateria	*t[4])
{
	int	i = 0;
	while (i < 4)
	{
		t[i] = NULL;
		i++;
	}
}

void	copyTabMateria(AMateria *t[4], AMateria *t1[4])
{
	int	i = 0;

	while (i < 4)
	{
		t[i] = t1[i];
		i++;
	}
}

MateriaSource::MateriaSource(void)
{
	initTabMateria(tab);
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
}

MateriaSource::~MateriaSource(void)
{
	int	i = 0;

	while (i < 4)
	{
		delete tab[i];
		i++;
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &source)
{

}

void	MateriaSource::learnMateria(AMateria *obj)
{
	int	i = 0;

	while (i < 4)
	{
		if (!this->tab[i])
		{
			this->tab[i] = obj;
			break;	
		}
		i++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &s)
{
	int	i = 0;

	while (i < 4)
	{
		if (tab[i] && tab[i]->getType() == s)
			return (this->tab[i]->clone());
		i++;
	}
}
