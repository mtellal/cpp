/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:21:09 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 18:09:33 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


int main()
{

	{
		Intern	someRandomIntern;
		Form	*rrf;
	
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << std::endl << *rrf << std::endl;
	};

	Intern		r;
	Form		*shrubbery;
	Form		*robot;
	Form		*president;
	Bureaucrat	bob("bob", 5);
	Bureaucrat	bib("bib", 100);
	Bureaucrat	bab("bab", 150);

	shrubbery = r.makeForm("shrubbery creation", "shrubbery");
	robot = r.makeForm("robotomy request", "Bender");
	president = r.makeForm("president pardon", "Bob");
	
	std::cout << std::endl;

	bob.signForm(*shrubbery);
	shrubbery->execute(bob);

	std::cout << std::endl;

	bob.signForm(*robot);	
	robot->execute(bob);
	
	std::cout << std::endl;

	bob.signForm(*president);
	president->execute(bob);

	std::cout << std::endl;

	return (0);
}
