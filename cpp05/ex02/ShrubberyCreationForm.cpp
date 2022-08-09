/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:02:10 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 11:01:42 by mtellal          ###   ########.fr       */
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

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &source)
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
	if (Form::verifyExecution(executer) && executer.getGrade() <= this->getXGrade())
	{
		this->drawShrubbery();
		std::cout << "Success ! ShrubberyCreationForm correctly executed !!!" << std::endl;
	}
}
