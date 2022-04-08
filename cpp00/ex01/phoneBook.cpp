/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:10:24 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/08 15:04:53 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"


void    PhoneBook::add()
{
        if (this->repo[nbContacts].setInfos())
	{
		if (nbContacts != 7)
			this->nbContacts++;
		else
			this->last_contact = 1;
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
        int             i;
        int             index;
        std::string     inp;
        std::string     ci;

        i = 0;
        i++;
        std::cout << "tapez l'index du contact choisi: ";
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
	if (this->last_contact)
		nb_contacts = 8;
	while(i < nb_contacts)
        {
                this->table(i);
                i++;
        }
        this->selectContact();
}
