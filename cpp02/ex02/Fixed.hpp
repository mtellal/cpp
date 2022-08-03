/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:40:06 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 11:06:26 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class	Fixed
{

	int			value;
	static int const	fbits;

	public:
	
		Fixed(void);
		Fixed(int const);
		Fixed(const float);
		Fixed(const Fixed &);
		~Fixed(void);
		
		Fixed	&operator=(const Fixed &);
		
		bool	operator>(const Fixed &) const;
		bool	operator<(const Fixed &) const;
		bool	operator>=(const Fixed &) const;
		bool	operator<=(const Fixed &) const;
		bool	operator==(const Fixed &) const;
		bool	operator!=(const Fixed &) const;

		Fixed	operator+(const Fixed &);
		Fixed	operator-(const Fixed &);
		Fixed	operator*(const Fixed &);
		Fixed	operator/(const Fixed &);
		
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;

		static Fixed	&min(Fixed &, Fixed &);
		static Fixed const	&min(const Fixed &, const Fixed &);	
		static Fixed	&max(Fixed &, Fixed &);
		static Fixed const	&max(const Fixed &, const Fixed &);

};

std::ostream     &operator<<(std::ostream &out, Fixed const &obj);


#endif 
