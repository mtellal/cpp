/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:31:11 by mtellal           #+#    #+#             */
/*   Updated: 2022/09/13 15:33:40 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : l(5)
{
}

Span::Span(unsigned int n) : l(n)
{
}

Span::Span(const Span &s)
{
	*this = s;
}

Span::~Span(void)
{
}

Span	&Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->l = src.l;
		this->v = src.v;
	}
	return (*this);
}

int		&Span::operator[](const unsigned int i)
{
	if (i >= this->l || i >= this->v.size())
		throw InvalidIndex();
	return (v.at(i));
}

void	Span::addNumber(int i)
{
	if (this->v.size() < this->l)
		this->v.push_back(i);
	else
		throw TooMuchNumbers();
}

long		Span::shortestSpan(void) const
{
	std::vector<int>			v2(this->v);
	std::vector<int>::iterator	it;
	long						min_diff;

	if (this->v.size() < 2)
		throw NotEnoughNumbers();
	std::sort(v2.begin(), v2.end());
	min_diff = static_cast<long>(*(v2.begin() + 1)) - static_cast<long>(*v2.begin());
	it = v2.begin() + 1;
	while (it != v2.end() - 1)
	{
		min_diff = std::min(min_diff, static_cast<long>(*(it + 1)) - static_cast<long>(*it));
		it++;
	}
	return (min_diff);
}

long		Span::longestSpan(void) const
{
	long	min;
	long	max;
	long	diff;

	if (this->v.size() < 2)
		throw NotEnoughNumbers();
	max = *std::max_element(this->v.begin(), this->v.end());
	min = *std::min_element(this->v.begin(), this->v.end());
	diff = static_cast<long>(max - min);
	return (diff);
}

const char	*Span::TooMuchNumbers::what(void) const throw()
{
	return ("Too much numbers");
}

const char	*Span::InvalidIndex::what(void) const throw()
{
	return ("Invalid index");
}

const char	*Span::NotEnoughNumbers::what(void) const throw()
{
	return ("Not enough numbers");
}