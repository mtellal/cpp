/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:10:24 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/30 13:47:02 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	nbContacts = 0;
	lastContact = 0;
}

PhoneBook::PhoneBook(const PhoneBook &source)
{
	nbContacts = source.nbContacts;
	lastContact = source.lastContact;
}

PhoneBook::~PhoneBook(void) {}

PhoneBook	&PhoneBook::operator=(const PhoneBook &source)
{
	if (this != &source)
	{
		this->nbContacts = source.nbContacts;
		this->lastContact = source.lastContact;
	}
	return (*this);
}

void    PhoneBook::add()
{
        if (this->repo[nbContacts].setInfos())
	{
		if (nbContacts != 7)
			this->nbContacts++;
		else
			this->lastContact = 1;
		std::cout << "!!! contact successfully created !!!" <<std::endl;
	}
}

void    PhoneBook::table(int i)
{
        std::cout << " " << i;
        printChar(7, ' ');
        std::cout << "|";
        printString(this->repo[i].firstName);
        printString(this->repo[i].lastName);
        printString(this->repo[i].nickName);
        std::cout << std::endl;
        printChar(40, '-');
        std::cout << std::endl;
}

void    PhoneBook::selectContact()
{
        int             index;
        std::string     inp;
        std::string     ci;
	std::string	tab[4];

        std::cout << "tapez l'index du contact choisit: ";
        std::getline(std::cin, inp);
        index = ft_index(inp);
        if (index < 0 || index > this->nbContacts)
                std::cout << "index invalide " << std::endl;
        else
        {
                std::cout << "informations sur le contact n " << index;
                std::getline(std::cin, ci);
                if (ci == "")
                        std::cout << "first name: " << this->repo[index].firstName;
                std::getline(std::cin, ci);
                if (ci == "")
                        std::cout << "last name: " << this->repo[index].lastName;
                std::getline(std::cin, ci);
                if (ci == "")
                        std::cout << "nick name: " << this->repo[index].nickName;
                std::getline(std::cin, ci);
                if (ci == "")
                        std::cout << "secret: " << this->repo[index].secret << std::endl;
        }
}

void    PhoneBook::search()
{
        int             i;
        std::string     input;
	int		nb_contacts;

        i = 0;
	nb_contacts = this->nbContacts;
        if (nb_contacts == 0)
        {
                std::cout << "!!! Aucun contact !!!" << std::endl;
                return ;
        }
        printChar(40, '-');
        std::cout << std::endl;
	if (this->lastContact)
		nb_contacts = 8;
	while(i < nb_contacts)
        {
                this->table(i);
                i++;
        }
        this->selectContact();
}
