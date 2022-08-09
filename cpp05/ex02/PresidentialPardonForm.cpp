/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:47:42 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/08 19:44:14 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor" << std::endl;
	this->target = "PresidentialPardonForm";
}

PresidentialPardonForm::PresidentialPardonForm(std::string s): Form("PresidentialPardonForm", 25, 5)
{
        std::cout << "PresidentialPardonForm parameter constrcutor" << std::endl;
	this->target = s;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source): Form("PresidentialPardonForm", 25, 5)
{
        std::cout << "PresidentialPardonForm copy constructor" << std::endl;
	this->target = source.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
        std::cout << "PresidentialPardonForm default destructor" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &source)
{
	return (*this);
}

void	PresidentialPardonForm::pardon(void)
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}
