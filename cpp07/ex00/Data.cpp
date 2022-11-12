/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:44:39 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/18 15:52:35 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) {}

Data::Data(int x) : i(x) {}

Data::Data(const Data &o) : i(o.i) {}

Data::~Data(void) {}

Data	&Data::operator=(const Data &o)
{
	if (this != &o)
		this->i = o.i;
	return (*this);
}

bool	Data::operator>(const Data &o)
{
	return (i > o.i ? true : false);
}

std::ostream	&operator<<(std::ostream &out, const Data &o)
{
	out << o.getAttribute();
	return (out);
}

int		Data::getAttribute(void) const
{
	return (this->i);
}