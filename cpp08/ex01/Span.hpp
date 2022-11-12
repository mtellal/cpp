/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:29:58 by mtellal           #+#    #+#             */
/*   Updated: 2022/09/13 15:31:03 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	public:

		Span(void);
		Span(unsigned int);
		Span(const Span &);
		~Span(void);

		Span	&operator=(const Span &);
		int		&operator[](const unsigned int);

		void	addNumber(int);
		long	shortestSpan(void) const;
		long	longestSpan(void) const;

		template<class T>
		void	insertData(T, T);

		class	TooMuchNumbers : public std::exception
		{
			public:
				const char *what(void) const throw();
		};

		class	InvalidIndex : public std::exception
		{
			public:
				const char *what(void) const throw();
		};

		class	NotEnoughNumbers : public std::exception
		{
			public:
				const char *what(void) const throw();
		};
		
	private:

		std::vector<int>	v;
		unsigned int		l;
	
};

template<class T>
void	Span::insertData(T begin, T end)
{
	this->v.insert(this->v.begin(), begin, end);
}

#endif
