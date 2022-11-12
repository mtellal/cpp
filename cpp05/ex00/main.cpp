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
	
	{
		Bureaucrat	bib(bob);
		Bureaucrat	bab;

		bab = bob;

		std::cout << bob << std::endl;
		std::cout << bib << std::endl;
		std::cout << bab << std::endl;
	}

	{
		std::cout << std::endl;

		Bureaucrat bib("bib", 150);

		std::cout << bib << std::endl;

		try
		{
			Bureaucrat bab("bab", 151);
		} catch (const std::exception &e)
		{
			std::cout << "Error in creating bab: " << e.what() << std::endl;
		}

		std::cout << std::endl;

		Bureaucrat bub("bub", 1);

		std::cout << bub << std::endl;

		try
		{
			Bureaucrat beb("beb", 0);
		} catch (const std::exception &e)
		{
			std::cout << "Error in creating beb: " << e.what() << std::endl;
		}

		std::cout << std::endl;

		try
		{
			Bureaucrat beb("beb", 0);
		} catch (const std::exception &e)
		{
			std::cout << "Error in creating beb: " << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "////////////	in/decrementing tests /////////////" << std::endl;

	std::cout << std::endl << bob << std::endl << std::endl;

	std::cout << "increment by 149" << std::endl;

	try
	{
		incrementGrade(&bob, 149);
	} catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << bob << std::endl;
	
	std::cout << std::endl << "increment once again: Should throw an error -> " << std::endl;

	try
	{
		incrementGrade(&bob, 2);
	} catch (const std::exception &e)
	{
		std::cout << "Error in incrementingGrade(bob): " << e.what() << std::endl;
	}	

	std::cout << std::endl << bob << std::endl << std::endl;

	std::cout << std::endl << "decrement by 149" << std::endl;

	try
	{
		decrementGrade(&bob, 149);
	} catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << bob << std::endl;

	std::cout << std::endl << "decrement once again: Should throw an error -> " << std::endl;

	try
	{
		decrementGrade(&bob, 2);
	} catch (const std::exception &e)
	{
		std::cout << "Error in decrementingGrade(bob): " << e.what() << std::endl;
	}

	std::cout << std::endl << bob << std::endl << std::endl;

	std::cout << std::endl;
	
	return (0);
}
