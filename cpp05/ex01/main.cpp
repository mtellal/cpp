/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:21:09 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/07 17:32:20 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void	incrementGrade(Bureaucrat *b, int i)
{
	while (i > 0)
	{
		b->incrementGrade();
		i--;
	}
}

static void	decrementGrade(Bureaucrat *b, int i)
{
	while (i > 0)
	{
		b->decrementGrade();
		i--;
	}
}

int main()
{

	Bureaucrat	bob("bob");
	Bureaucrat	bib(bob);

	std::cout << std::endl << bob << std::endl;
	std::cout << "increment by 150" << std::endl;
	incrementGrade(&bob, 150);
	std::cout << bob << std::endl;
	std::cout << "increment once again: Should throw an error -> ";
	bob.incrementGrade();	

	std::cout << std::endl << "decrement by 151" << std::endl;
	decrementGrade(&bob, 151);
	std::cout << bob << std::endl;
	std::cout << "decrement once again: Should throw an error -> ";
	bob.decrementGrade();

	std::cout << std::endl << bib << std::endl << std::endl;
	

	return (0);
}
