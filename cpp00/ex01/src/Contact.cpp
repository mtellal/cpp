/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:29:56 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/22 16:23:33 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void)
{
	firstName = "";
	lastName = "";
	nickName = "";
	secret = "";
	phoneNumber = "";
}

Contact::Contact(const Contact &s)
{
	firstName = s.firstName;
	lastName = s.lastName;
	nickName = s.nickName;
	secret = s.secret;
	phoneNumber = s.phoneNumber;
}

Contact	&Contact::operator=(const Contact &s)
{
	if (&s != this)
	{
		this->firstName = s.firstName;
		this->lastName = s.lastName;
		this->nickName = s.nickName;
		this->secret = s.secret;
		this->phoneNumber = s.phoneNumber;
	}
	return (*this);
}

Contact::~Contact(void) {};

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

////////////////	GETTERS		////////////

std::string	Contact::getFirstName(void) const
{
	return (this->firstName);
}

std::string     Contact::getLastName(void) const
{
        return (this->lastName);
}

std::string     Contact::getNickName(void) const
{
        return (this->nickName);
}

std::string     Contact::getSecret(void) const
{
        return (this->secret);
}

std::string     Contact::getPhoneNumber(void) const
{
        return (this->phoneNumber);
}

//////////////		SETTERS		////////////

void	Contact::setFirstName(std::string s)
{
	this->firstName = s;
}

void    Contact::setLastName(std::string s)
{
        this->lastName = s;
}

void    Contact::setNickName(std::string s)
{
        this->nickName = s;
}

void    Contact::setSecret(std::string s)
{
        this->secret = s;
}

void    Contact::setPhoneNumber(std::string s)
{
        this->phoneNumber = s;
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
