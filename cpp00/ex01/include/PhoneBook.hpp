/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:16:29 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/30 14:35:43 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	
		int	nbContacts;
		int	lastContact;
		Contact	repo[8];

	public:
		PhoneBook(void);
		PhoneBook(const PhoneBook &);
		~PhoneBook(void);
		PhoneBook &operator=(const PhoneBook &);

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
