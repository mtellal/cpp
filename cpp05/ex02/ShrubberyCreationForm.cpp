/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:02:10 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 15:48:51 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	this->target = "ShrubberyCreationForm";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string s): Form("ShrubberyCreationForm", 145, 137)
{
        std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	this->target = s;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source): Form("ShrubberyCreationForm", 145, 137) 
{
        std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
	this->target = source.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
        std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
{
	return (*this);
}

void	ShrubberyCreationForm::drawShrubbery(void) const
{
	std::ifstream	infile;
	std::string	line;
	std::ofstream	outfile;

	infile.open("shrubberyTree.txt");
	outfile.open(this->target + "_shrubbery");
	while (getline(infile, line))
		outfile << line;
	outfile << std::endl << std::endl;
	infile.close();
	outfile.close();
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executer) const
{
	if (Form::verifyExecution(executer))
	{
		this->drawShrubbery();
		std::cout << executer.getName() << " executed " << this->getTarget() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &obj)
{
	out << obj.getTarget() << ", sgrade: " << obj.getSGrade() << ", xgrade: " << obj.getXGrade() << std::endl;
	return (out);
}
