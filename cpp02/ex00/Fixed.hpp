/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:11:23 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/14 16:42:04 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int			f;
		static const int	ffract = 8;
	public:
		int	getRawBits( void );
		void	setRawBits( int const raw );
		Fixed();
		Fixed(const Fixed &);
		Fixed	&operator=(Fixed const &n);	
		~Fixed();
};

#endif
