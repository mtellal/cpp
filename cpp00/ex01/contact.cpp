/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:29:56 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/08 14:41:13 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int	get_line(std::string& s)
{
	std::string input;

	std::getline(std::cin, input);
	if (input == "")
		return (0);
	else
	{
		s = input;
		return (1);	
	}
}

int	errField()
{
	std::cout << "champ vide\nVeuillez reessayer" << std::endl;	
	return (0);
}

int	Contact::setInfos()
{
        std::cout << "first name: ";
	if (!get_line(this->firstName))
		return (errField());
        std::cout << "last name: ";
	if (!get_line(this->lastName))
		return (errField());
        std::cout << "nick name: ";
	if (!get_line(this->nickName))
		return (errField());
        std::cout << "phone number: ";
	if (!get_line(this->phoneNumber))
		return (errField());
        std::cout << "secret: ";
	if (!get_line(this->secret))
		return (errField());
	return (1);
}
