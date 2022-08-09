/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:24:05 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 17:04:16 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &)
{
	std::cout << "Intern copy constrcutor called" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(const Intern &)
{
	return (*this);
}

Form	*newShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*newRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*newPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string f, std::string name)
{
	int		i = 0;
	std::string 	tab[3] = {"shrubbery creation", "robotomy request", "president pardon"};
	Form		*(*ptr[3])(std::string) = {newShrubbery, newRobotomy, newPresidential}; 

	while (i < 3)
	{
		if (tab[i] == f)
		{
			std::cout << "Intern creates " << tab[i] << std::endl;
			return ((ptr[i])(name));
		}
		i++;
	}
	std::cout << "Intern: Invalid form name !" << std::endl;
	return (NULL);
}
