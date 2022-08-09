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

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	this->target = "RobotomyRequestForm";
}

RobotomyRequestForm::RobotomyRequestForm(std::string s): Form("RobotomyRequestForm", 72, 45)
{
        std::cout << "RobotomyRequestForm default constructor called" << std::endl;
	this->target = s;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &source): Form("RobotomyRequestForm", 72, 45)
{
        std::cout << "RobotomyRequestForm parameter constructor called" << std::endl;
	this->target = source.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void	RobotomyRequestForm::drill(void) const
{
	std::cout << "Brrrrrrrr ... ";
	if (rand() % 2)
		std::cout << "Succes !!! " << this->target << " has been correctly robotised, with 50% of success !" << std::endl; 
	else
		std::cout <<  "Failure !!! " << this->target << " hasn't been robotised, with 50% of failure !" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executer) const
{
	if (Form::verifyExecution(executer))
        {
                this->drill();
		std::cout << executer.getName() << " executed " << this->getTarget() << std::endl;
	}
}

std::ostream    &operator<<(std::ostream &out, const RobotomyRequestForm &obj)
{
        out << obj.getTarget() << ", sgrade: " << obj.getSGrade() << ", xgrade: " << obj.getXGrade() << std::endl;
        return (out);
}

