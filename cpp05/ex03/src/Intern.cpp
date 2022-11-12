/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:21:30 by mtellal           #+#    #+#             */
/*   Updated: 2022/09/03 15:24:11 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Default constructor called (Intern)" << std::endl;
}

Intern::Intern(const Intern &)
{
	std::cout << "Copy constructor called (Intern)" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Destructor calld (Intern)" << std::endl;
}

Intern	&Intern::operator=(const Intern &)
{
	std::cout << "Assignment operator called (Intern)" << std::endl;
	return (*this);
}

Form	*Intern::newShrubberyCreation(std::string name) 
{
	return (new ShrubberyCreationForm(name));
}

Form	*Intern::newRobotomyRequest(std::string name) 
{
	return (new RobotomyRequestForm(name));
}

Form	*Intern::newPresidentialPardon(std::string name) 
{
	return (new PresidentialPardonForm(name));
}

Form	*Intern::makeForm(std::string nform, std::string target)
{
	int 	i = 0;
	std::string	form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Form*	(Intern::*ptr[3])(std::string) = {&Intern::newShrubberyCreation, &Intern::newRobotomyRequest, &Intern::newPresidentialPardon};

	while (i < 3)
	{
		if (form[i] == nform)
		{
			std::cout << "Intern creates " << target << std::endl;
			return ((this->*ptr[i])(target));
		}
		i++;
	}

	std::cout << "no forms for: " << nform << std::endl;

	return (NULL);
}

