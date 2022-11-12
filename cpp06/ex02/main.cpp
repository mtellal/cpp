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

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	r;

	r = rand() % 3;
	if (r == 0)
		return (new A());
	else if (r == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base *ba)
{
	A	*a = NULL;
	B	*b = NULL;
	C	*c = NULL;

	a = dynamic_cast<A*>(ba);
	b = dynamic_cast<B*>(ba);
	c = dynamic_cast<C*>(ba);
	if (a)
		std::cout << "Base A";
	else if (b)
		std::cout << "Base B";
	else if (c)
		std::cout << "Base C";
	else 
		std::cout << "Base not found";
	std::cout << std::endl;
}

void    identify(Base &ba)
{
	try
	{
		A	&a = dynamic_cast<A&>(ba);
		std::cout << "Base A" << std::endl;
		(void)a;
		return ;
	}
	catch (const std::exception &e) {}
	
	try
	{
		B	&b = dynamic_cast<B&>(ba);
		std::cout << "Base B" << std::endl;
		(void)b;
		return ;
	}
	catch (const std::exception &e) {}
	
	try
	{
		C	&c = dynamic_cast<C&>(ba);
		std::cout << "Base C" << std::endl;
		(void)c;
		return ;
	}
	catch (const std::exception &e) {}
}


/////////// functions for tab (test) //////////////////

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

	srand(time(0));

	Base	*tab[10];

	Base	*a = new A();
	Base	*b = new B();
	Base	*c = new C();

	Base	*a2 = a;
	Base	*b2 = b;
	Base	*c2 = c;

	Base	&a3 = *a;
	Base	&b3 = *b;
	Base	&c3 = *c;

	std::cout << std::endl << "	Manuel Tests	" << std::endl << std::endl;

	std::cout << "	Base * Tests	" << std::endl;

	std::cout << "identify for base *a = "; identify(a);
	std::cout << "identify for base *b = "; identify(b);
	std::cout << "identify for base *c = "; identify(c);

	std::cout << std::endl << "	Base * from * Tests	" << std::endl;

	std::cout << "identify for base a2 = "; identify(a2);
	std::cout << "identify for base b2 = "; identify(b2);
	std::cout << "identify for base c2 = "; identify(c2);

	std::cout << "	Base & Tests	" << std::endl;

	std::cout << "identify for base a3 = "; identify(a3);
	std::cout << "identify for base b3 = "; identify(b3);
	std::cout << "identify for base c3 = "; identify(c3);

	delete a;
	delete b;
	delete c;

	std::cout << std::endl << "	Generate Tests	" << std::endl;

	generateTab(tab, 10);

	identifyTab(tab, 10);

	std::cout << std::endl;

	cleanTab(tab, 10);

	std::cout << std::endl;
	

	return (0);
}
