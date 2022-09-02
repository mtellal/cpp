/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:29:01 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/07 17:17:16 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("Burreacrat"), grade(150)
{
	std::cout << "Default constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string s): name(s), grade(150)
{
	std::cout << "Parameter constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(std::string s, unsigned int i): name(s)
{
	std::cout << "Parameter constructor called (Bureaucrat)" << std::endl;
	if (i < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (i > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = i;
}

Bureaucrat::Bureaucrat(const Bureaucrat &source): name(source.name), grade(source.grade)
{
	std::cout << "Copy constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called (Bureaucrat)" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &source)
{
	std::cout << "Assignment operator called (Bureaucrat)" << std::endl;

	if (this != &source)
	{
		this->grade = source.grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
	return (out);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}