/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:21:19 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 15:49:01 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): 
Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "Default constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string s): 
Form(s, 72, 45)
{
    std::cout << "Default constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &s): 
Form(s.getName(), 72, 45)
{
    std::cout << "Parameter constructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Destructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &)
{
	std::cout << "Assignment operator called (RobotomyRequestForm)" << std::endl;
	return (*this);
}

void	RobotomyRequestForm::drill(void) const
{
	std::cout << "Brrrrrrrr ... ";
	if (rand() % 2)
		std::cout << "Succes !!! " << this->getName() << " has been correctly robotised, with 50% of success !" << std::endl; 
	else
		std::cout <<  "Failure !!! " << this->getName() << " hasn't been robotised, with 50% of failure !" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executer) const
{
	try
	{
		this->verifyExecution(executer);
		this->drill();
		std::cout << executer.getName() << " executed " << this->getName() << std::endl;
	} catch (const std::exception &e)
	{
		std::cout << executer.getName() << " couldn't executed " << this->getName() << " because :"
		<< e.what() << std::endl;
	}
}

std::ostream    &operator<<(std::ostream &out, const RobotomyRequestForm &obj)
{
        out << obj.getName() << ", sgrade: " << obj.getSGrade() << ", xgrade: " << obj.getXGrade() << std::endl;
        return (out);
}

