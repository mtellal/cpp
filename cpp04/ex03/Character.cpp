/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:14:10 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/07 10:53:08 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void	initItems(AMateria *t[4])
{
	int	i = 0;

	while (i < 4)
	{
		t[i] = NULL;
		i++;
	}
}

Character::Character(void) : name("Personnage")
{
	std::cout << "Default constructor called (Character)" << std::endl;
	initItems(this->items);
}

Character::Character(std::string s) : name(s)
{
	std::cout << "Parameter constructor called (Character)" << std::endl;
	initItems(this->items);
}

Character::Character(const Character &source) : name(source.name)
{
	int i = 0;

	std::cout << "Copy constructor called (Character)" << std::endl;
	initItems(this->items);
	while (i < 4)
	{
		if (this->items[i])
			delete this->items[i];
		if (source.items[i])
			this->items[i] = source.items[i]->clone();
		else
			this->items[i] = NULL;
		i++;
	}
}

Character::~Character(void)
{
	int				i = 0;

	std::cout << "Destructor called (Character)" << std::endl;
	while (i < 4)
	{
		if (this->items[i])
			delete this->items[i];
		i++;
	}

}

Character	&Character::operator=(const Character &source)
{
	if (this != &source)
	{
		int i = 0;
	
		while (i < 4)
		{
			if (this->items[i])
				delete this->items[i];
			if (source.items[i])
				this->items[i] = source.items[i]->clone();
			else
				this->items[i] = NULL;
			i++;
		}
		this->name = source.name;
	}
	return (*this);
}

std::string const       &Character::getName(void) const
{
        return (this->name);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;

	while (i < 4)
	{
		if (!this->items[i])
		{
			this->items[i] = m;
			break ;
		}
		i++;
	}	
}

void	Character::unequip(int idx)
{
	int	i = 0;

	while (i < 4 && idx >= 0 && idx <= 3)
	{
		if (i == idx && this->items[i])
		{
			this->items[i] = NULL;
			break ;
		}
		i++;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && this->items[idx])
	{
		std::cout << this->name << ": ";
		this->items[idx]->use(target);
	}
}

