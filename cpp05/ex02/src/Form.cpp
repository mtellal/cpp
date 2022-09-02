/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:42:15 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 11:31:20 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): 
name("Form"), isSigned(false), sGrade(1), xGrade(1)
{
	std::cout << "Default constructor called (Form)" << std::endl;
}

Form::Form(std::string s): 
name(s), isSigned(false), sGrade(1), xGrade(1)
{
	std::cout << "Parameter constrcutor called (Form)" << std::endl;
}

Form::Form(std::string s, unsigned int sg, unsigned int xg): 
name(s), isSigned(false), sGrade(sg), xGrade(xg)
{
	std::cout << "Parameter constructor called (Form)" << std::endl;
}

Form::Form(const Form &s): 
name(s.name), isSigned(s.isSigned), sGrade(s.sGrade), xGrade(s.xGrade)
{
	std::cout << "Copy constructor called (Form)" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Destructor called (Form)" << std::endl;
}

Form	&Form::operator=(const Form &)
{
	std::cout << "Assignment oprator called (Form)" << std::endl;
	return (*this);
}

const std::string	Form::getName(void) const
{
	return (this->name);
}

bool	Form::getSigned(void) const
{
	return (this->isSigned);
}

unsigned int	Form::getSGrade(void) const
{
	return (this->sGrade);
}

unsigned int	Form::getXGrade(void) const
{
	return (this->xGrade);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (this->sGrade < b.getGrade())
		throw Form::GradeTooLowException();
	else if (!this->isSigned)
		this->isSigned = true;
}

void	Form::verifyExecution(Bureaucrat const &b) const
{
	if (!this->isSigned)
		throw Form::UnsignedForm();
	if (this->sGrade < b.getGrade() || this->xGrade < b.getGrade())
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &out, const Form &obj)
{
	out << "Name: " << obj.getName() << " | isSigned: " << obj.getSigned() << " | sGrade: " 
	<< obj.getSGrade() << " | xGrade: " << obj.getXGrade() << std::endl;
	return (out);
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade to high (Form)");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade to low (Form)");
}

const char	*Form::UnsignedForm::what() const throw()
{
	return ("Form unsigned");
}

