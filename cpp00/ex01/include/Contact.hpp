/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:20:06 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/29 16:15:02 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

        public:

	Contact();
	Contact(const Contact &);
	~Contact();
	Contact	&operator=(const Contact &);

	std::string     firstName;
	std::string     lastName;
	std::string     nickName;
	std::string     secret;
	std::string     phoneNumber;
	int     setInfos();
};


#endif
