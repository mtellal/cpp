/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:29:56 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/07 18:14:56 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void	get_line(std::string& s)
{
	std::string input;

	std::getline(std::cin, input);
	if (input == "")
	{
		std::cout << "!!! empty field !!!";
		std::cout << "phone_book: :";
	}
	else
		s = input;
}

void    Contact::setInfos()
{
        std::cout << "first name: ";
	get_line(this->firstName);
        std::cout << "last name: ";
	get_line(this->lastName);
        std::cout << "nick name: ";
	get_line(this->nickName);
        std::cout << "phone number: ";
	get_line(this->phoneNumber);
        std::cout << "secret: ";
	get_line(this->secret);
}
