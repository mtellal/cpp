/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:24:35 by mtellal           #+#    #+#             */
/*   Updated: 2022/09/03 15:25:46 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:

		Intern(void);
		Intern(const Intern &s);
		Intern	&operator=(const Intern &s);
		~Intern(void);

		Form	*makeForm(std::string, std::string);

	private:
	
		Form	*newShrubberyCreation(std::string);
		Form	*newRobotomyRequest(std::string);
		Form	*newPresidentialPardon(std::string);

};

#endif 
