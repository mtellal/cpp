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

MateriaSource::MateriaSource(void)
{
	std::cout << "Default constructor called (MateriaSource)" << std::endl;
	initTabMateria(tab);
}

MateriaSource::MateriaSource(const MateriaSource &source)
{
	int	i = 0;

	std::cout << "Copy constructor called (MateriaSource)" << std::endl;
	while (i < 4)
	{
		if (this->tab[i])
			delete tab[i];
		if (source.tab[i])
			this->tab[i] = source.tab[i];
		else
			this->tab[i] = NULL;
		i++;
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &source)
{
	if (this != &source)
	{
		int i = 0;

		while (i < 4)
		{
			if (this->tab[i])
				delete tab[i];
			if (source.tab[i])
				this->tab[i] = source.tab[i];
			else
				this->tab[i] = NULL;
			i++;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	int i = 0;
	std::cout << "Destructor called (MateriaSource)" << std::endl;
	while (i < 4)
	{
		if (this->tab[i])
			delete this->tab[i];
		i++;
	}
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
	return (NULL);
}
