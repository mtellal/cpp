/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:16:29 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/08 15:04:02 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <string>

class Contact {
	public:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	secret;
		std::string	phoneNumber;
		int	setInfos();
};

class PhoneBook {
	public:
		PhoneBook()
		{
			nbContacts = 0;
			last_contact = 0;
		}
		
		int	nbContacts;
		int	last_contact;
		Contact	repo[8];
		void	add();
		void	search();
		void	table(int i);
		void	selectContact();
};


/////		UTILS		/////
void	printChar(int i, char c);
void	printString(std::string s);
int     ft_index(std::string s);

#endif 
