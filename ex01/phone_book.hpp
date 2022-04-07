/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:16:29 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/07 18:30:56 by mtellal          ###   ########.fr       */
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
		void	setInfos();
};

class PhoneBook {
	public:
		PhoneBook()
		{
			nbContacts = 0;
		}
		
		int	nbContacts;
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
