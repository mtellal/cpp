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

Form::Form(void): name("Form"), isSigned(false), sGrade(0), xGrade(0)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string s): name(s), isSigned(false), sGrade(0), xGrade(0)
{
	std::cout << "Form parameter constrcutor called" << std::endl;
}

Form::Form(std::string s, const int sg, const int xg): name(s), isSigned(false), sGrade(sg), xGrade(xg)
{
	std::cout << "Form parameter constructor called" << std::endl;
}

Form::Form(const Form &s): name(s.getName()), isSigned(s.getSigned()), sGrade(s.getSGrade()), xGrade(s.getXGrade())
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form	&Form::operator=(const Form &source)
{
	if (this != &source)
	{
		this->isSigned = source.getSigned();
	}
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

int	Form::getSGrade(void) const
{
	return (this->sGrade);
}

int	Form::getXGrade(void) const
{
	return (this->xGrade);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (this->sGrade < b.getGrade())
		throw Form::GradeTooLowException();
	else
		this->isSigned = true;
}

std::ostream	&operator<<(std::ostream &out, const Form &obj)
{
	out << obj.getName();
	return (out);
}


