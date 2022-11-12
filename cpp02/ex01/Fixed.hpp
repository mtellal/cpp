/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 17:15:52 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/28 15:40:15 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &n);
		Fixed(int const n);
		Fixed(float const n);
		~Fixed(void);

		Fixed	&operator=(Fixed const &n);
		
		int	getRawBits(void) const;
		void	setRawBits(int const n);

		float	toFloat(void) const;
		int	toInt(void) const;


	private:

		int			rawBits;
		static const int	ffract = 8;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &obj);

#endif
