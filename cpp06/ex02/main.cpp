/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:40:52 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/17 16:45:34 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void	generateTab(Base **t, int i)
{
	while (i > 0)
	{
		t[i] = generate();
		i--;
	}
}

void	identifyTab(Base **t, int i)
{
	while (i > 0)
	{
		std::cout << "identify for tab[" << i << "] = ";
		identify(t[i]);
		i--;
	}
}

void	cleanTab(Base **t, int i)
{
	while (i > 0)
	{
		delete t[i];
		i--;
	}
}

int main()
{
	Base	*tab[10];

	Base	*a = new A();
	Base	*b = new B();
	Base	*c = new C();

	Base	&a2 = *a;
	Base	&b2 = *b;
	Base	&c2 = *c;

	std::cout << std::endl << "	Manuel Tests	" << std::endl << std::endl;
	std::cout << "	Base * Tests	" << std::endl;
	std::cout << "identify for base *a = "; identify(a);
	std::cout << "identify for base *b = "; identify(b);
	std::cout << "identify for base *c = "; identify(c);
	std::cout << std::endl << "	Base & Tests	" << std::endl;
	std::cout << "identify for base &a2 = "; identify(a2);
	std::cout << "identify for base &b2 = "; identify(b2);
	std::cout << "identify for base &c2 = "; identify(c2);

	delete a;
	delete b;
	delete c;

	std::cout << std::endl << "	Generate Tests	" << std::endl;
	generateTab(tab, 10);
	identifyTab(tab, 10);	
	cleanTab(tab, 10);

	std::cout << std::endl;
	

	return (0);
}
