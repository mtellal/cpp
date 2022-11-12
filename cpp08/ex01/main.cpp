/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:29:26 by mtellal           #+#    #+#             */
/*   Updated: 2022/09/13 15:29:51 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cmath>

void	tryShortestSpan(const Span &obj)
{
	try
	{
		std::cout << obj.shortestSpan() << std::endl;
	} catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	tryLongestSpan(const Span &obj)
{
	try
	{
		std::cout << obj.longestSpan() << std::endl;
	} catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "/////	SUBJECT TESTS //////" << std::endl;

	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << "////////		MORE TESTS		/////////" << std::endl;

	std::vector<int>	v;
	Span				sp(10000);	
	int					r;

	srand(time(NULL));

	int i = 0;
	while (i < 10000)
	{
		r = rand();
		v.push_back(r);
		sp.addNumber(r);
		i++;
	}

	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl << std::endl;


	{
		std::cout << "//// TEST WITH RANGE OF ITERATORS //////" << std::endl;

		Span 	ssp;

		ssp.insertData< std::vector<int>::iterator >(v.begin(), v.end());

		std::cout << ssp.longestSpan() << std::endl;
		std::cout << ssp.shortestSpan() << std::endl << std::endl;
	}

	{
		std::cout << "/// TRY TO ADD MORE NUMBERS /////" << std::endl;

		Span	sp(2);

		sp.addNumber(1);
		sp.addNumber(2);

		try
		{
			sp.addNumber(3);
		} catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}

		Span	sp2(sp);

		try
		{
			sp2.addNumber(3);
		} catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl << std::endl;
		}

	}

	{
		std::cout << "/// TESTS WITH 0/1 NUMBERS ////" << std::endl;

		Span	ssp;
		Span	lsp;

		tryShortestSpan(ssp);
		tryLongestSpan(lsp);

		ssp.addNumber(1);
		lsp.addNumber(1);

		tryShortestSpan(ssp);
		tryLongestSpan(lsp);

		ssp.addNumber(2);
		lsp.addNumber(2);

		tryShortestSpan(ssp);
		tryLongestSpan(lsp);

		std::cout << std::endl;
	}

	{
		std::cout << "//// TESTS SHORTEST/LONGEST SPAN /////" << std::endl;

		Span	s;

		s.addNumber(-2147483648);
		s.addNumber(2147483647);

		std::cout << s.longestSpan() << std::endl;
		std::cout << s.shortestSpan() << std::endl << std::endl << std::endl;
	}

	{
		sp[rand() % 10000] = 1;
		sp[rand() % 10000] = 0;

		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}


	return (0);
}
