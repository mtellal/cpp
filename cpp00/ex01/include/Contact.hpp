/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:20:06 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/22 16:23:04 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {


	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	secret;
	std::string	phoneNumber;

        public:

	Contact(void);
	Contact(const Contact &);
	~Contact(void);
	Contact	&operator=(const Contact &);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getSecret(void) const;
	std::string	getPhoneNumber(void) const;

	void		setFirstName(std::string);
	void		setLastName(std::string);
	void		setNickName(std::string);
	void		setSecret(std::string);
	void		setPhoneNumber(std::string);

	int		setInfos(void);
};


#endif
