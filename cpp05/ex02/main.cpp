/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:21:09 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 10:51:10 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

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

	ShrubberyCreationForm	f;
	Bureaucrat		bob("bob", 2);

	f.beSigned(bob);
	f.execute(bob);
	return (0);
}
