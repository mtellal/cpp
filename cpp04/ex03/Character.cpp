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

Character::Character(void)
{
	initItems(items);
}

Character::Character(std::string s) : name(s)
{
	initItems(items);
}

Character::Character(const Character &source) : name(source.getName())
{
	initItems(items);
}

Character::~Character(void)
{
	int	i = 0;

	while (i < 4)
	{
		delete items[i];
		i++;
	}
}

Character	&Character::operator=(const Character &source)
{
	this->items[0] = source.getItems(0);
	this->items[1] = source.getItems(1);
	this->items[2] = source.getItems(2);
	this->items[3] = source.getItems(3);
	this->name = source.getName();
}

std::string const       &Character::getName(void) const
{
        return (this->name);
}

AMateria	*Character::getItems(int i) const
{
	return (this->items[i]);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;

	while (i < 4)
	{
		if (!this->items[i])
		{
			this->items[i] = m->clone();
			break ;
		}
		i++;
	}	
}

void	Character::unequip(int idx)
{
	int	i = 0;

	while (i < 4)
	{
		if (i == idx && this->items[i])
		{
			delete this->items[i];
			this->items[i] = NULL;
			break ;
		}
		i++;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->items[idx])
		this->items[idx]->use(target);
}

