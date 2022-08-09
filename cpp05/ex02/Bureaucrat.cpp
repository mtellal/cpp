/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:29:01 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 10:49:46 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void): name("Burreacrat"), grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string s): name(s), grade(150)
{
	std::cout << "Bureaucrat parameter constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string s, int g): name(s), grade(g)
{
        std::cout << "Bureaucrat parameter constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &source): name(source.getName()), grade(source.getGrade())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &source)
{
	if (this != &source)
	{
		this->name = source.getName();
		this->grade = source.getGrade();
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
	 try
        {
                if (this->grade < 1)
                        throw Bureaucrat::GradeTooHighException();
                this->grade--;
        }
        catch (const std::exception &e)
        {
                std::cout << e.what() << std::endl;
        }
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
        	if (this->grade > 150)
        	        throw Bureaucrat::GradeTooLowException();
		this->grade++;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form &f)
{
	f.beSigned(*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
