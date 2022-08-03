/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:15:52 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/02 13:20:58 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
		int			value;
		static const int	fbits = 8;
	
	public:
		Fixed();
		Fixed(Fixed const &n);
		Fixed(int const n);
		Fixed(float const n);

		Fixed	&operator=(Fixed const &n);
		
		int	getRawBits(void) const;
		void	setRawBits(int const n);

		float	toFloat(void) const;
		int	toInt(void) const;

		~Fixed();
};

std::ostream	&operator<<(std::ostream &out, Fixed const &obj);

#endif
