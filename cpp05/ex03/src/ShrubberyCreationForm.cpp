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

ShrubberyCreationForm::ShrubberyCreationForm(void): 
Form("ShrubberyCreationForm", 145, 137)
{
	std::cout << "Default constructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string s): 
Form(s, 145, 137)
{
    std::cout << "Parameter constructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source): 
Form(source.getName(), 145, 137) 
{
    std::cout << "Copy constructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
        std::cout << "Destructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &)
{
	std::cout << "Assignment operator called (ShrubberyCreationForm)" << std::endl;
	return (*this);
}

void	ShrubberyCreationForm::drawShrubbery(void) const
{
	std::ifstream	infile;
	std::string	line;
	std::ofstream	outfile;

	infile.open("src/shrubberyTree.txt");
	outfile.open((this->getName() + "_shrubbery").c_str());
	while (getline(infile, line))
		outfile << line << std::endl;
	outfile << std::endl << std::endl;
	infile.close();
	outfile.close();
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executer) const
{
	this->verifyExecution(executer);
	this->drawShrubbery();
}

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &obj)
{
	out << obj.getName() << ", sgrade: " << obj.getSGrade() << ", xgrade: " << obj.getXGrade() << std::endl;
	return (out);
}
