/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:51:48 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/17 16:39:39 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	r;

	r = rand() % 100;
	if (r <= 33)
		return (new A());
	else if (r > 33 && r <= 66)
		return (new B());
	else if (r > 66 && r <= 99)
		return (new C());
}

void	identify(Base *ba)
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A*>(ba);
	b = dynamic_cast<B*>(ba);
	c = dynamic_cast<C*>(ba);
	std::cout << "Base ";
	if (a)
		std::cout << "A";
	else if (b)
		std::cout << "B";
	else if (c)
		std::cout << "C";
	std::cout << std::endl;
}

void    identify(Base &ba)
{
        A       a;
        B       b;
        C       c;

	try
	{
		a = dynamic_cast<A&>(ba);
		std::cout << "Base A" << std::endl;
		return ;
	}
	catch (const std::exception &e) {}
	
	try
	{
		b = dynamic_cast<B&>(ba);
		std::cout << "Base B" << std::endl;
		return ;
	}
	catch (const std::exception &e) {}
	
	try
	{
		c = dynamic_cast<C&>(ba);
		std::cout << "Base C" << std::endl;
		return ;
	}
	catch (const std::exception &e) {}
}

