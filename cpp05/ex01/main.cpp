/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:21:09 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/08 14:48:52 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

static void	incrementGrade(Bureaucrat &b, int i)
{
	try 
	{
		while (i > 0)
		{
			b.incrementGrade();
			i--;
		}
	} catch (const std::exception &e)
	{
		std::cout << b.getName() << " couldn't increment because: " << e.what() << std::endl;
	}
}

static void	decrementGrade(Bureaucrat &b, int i)
{
	try 
	{
		while (i > 0)
		{
			b.decrementGrade();
			i--;
		}
	} catch (const std::exception &e)
	{
		std::cout << b.getName() << " couldn't decrement because: " << e.what() << std::endl;
	}
}

int main()
{

	{
		Bureaucrat a("A", 50);
		Bureaucrat a2("A2", 100);
		Bureaucrat b(a);
		Bureaucrat c;
		
		c = a;

		std::cout << a << std::endl;
		std::cout << a2 << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		c = a2;
		std::cout << c << std::endl;
	}

	std::cout << std::endl << std::endl;

	{
		Form a("a", 50, 20);
		Form a2("a2", 30, 10);
		Form b(a);
		Form c;
		
		c = a;

		std::cout << a << std::endl;
		std::cout << a2 << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;
		c = a2;
		std::cout << c << std::endl;

		try
		{
			Form	f("apl", 0, 1);
			std::cout << f << std::endl;
		} catch (const std::exception &e)
		{
			std::cout << "Error in creating apl because: " << e.what() << std::endl << std::endl;
		}
		
		try
		{
			Form	f("apl", 1, 151);
			std::cout << f << std::endl;
		} catch (const std::exception &e)
		{
			std::cout << "Error in creating apl because: " << e.what() << std::endl << std::endl;
		}

		try
		{
			Form	f("apl", 1, 150);
			std::cout << f << std::endl;
		} catch (const std::exception &e)
		{
			std::cout << "Error in creating apl because: " << e.what() << std::endl << std::endl;
		}
	}

	std::cout << std::endl << std::endl << std::endl;

	{

		Form		apl("APL", 20, 10);
		Bureaucrat	bob("bob");

		std::cout << std::endl;
		std::cout << apl << std::endl;
		std::cout << bob << std::endl;

		std::cout << "Let's try to sign it " << std::endl;
		bob.signForm(apl);

		std::cout << std::endl << "increment bob's grade" << std::endl;
		incrementGrade(bob, 130);
		std::cout << bob << std::endl;

		std::cout << "Let's try to sign it again" << std::endl;
		bob.signForm(apl);
		std::cout << std::endl;

		std::cout << std::endl << "decrement bob's grade" << std::endl;
		decrementGrade(bob, 2);
		std::cout << bob << std::endl;
		std::cout << apl << std::endl;

		std::cout << "Let's try others tests" << std::endl;

		bob.signForm(apl);
		
		decrementGrade(bob, 50);
		bob.signForm(apl);

		std::cout << apl << std::endl;
		std::cout << bob << std::endl;

		decrementGrade(bob, 100);
		incrementGrade(bob, 200);

		std::cout << bob << std::endl;

		std::cout << std::endl;


	}

	return (0);
}
