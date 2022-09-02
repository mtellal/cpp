/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:47:42 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 15:49:12 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): 
Form("PresidentialPardonForm", 25, 5)
{
        std::cout << "Default constructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string s): 
Form(s, 25, 5)
{
        std::cout << "Parameter constrcutor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source): 
Form(source.getName(), 25, 5)
{
        std::cout << "Copy constructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
        std::cout << "Destructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &)
{
        std::cout << "Assignment operator called (PresidentialPardonForm)" << std::endl;
	return (*this);
}

void	PresidentialPardonForm::pardon(void) const
{
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executer) const
{
        try
        {
                this->verifyExecution(executer);
                this->pardon();
                std::cout << executer.getName() << " executed " << this->getName() << std::endl;
        } catch (const std::exception &e)
        {
                std::cout << executer.getName() << " couldn't executed " << this->getName() << " because :"
                << e.what() << std::endl;
        }
}

std::ostream    &operator<<(std::ostream &out, const PresidentialPardonForm &obj)
{
        out << obj.getName() << ", sgrade: " << obj.getSGrade() << ", xgrade: " << obj.getXGrade() << std::endl;
        return (out);
}

