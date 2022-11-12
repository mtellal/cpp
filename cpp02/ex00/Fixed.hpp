/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:11:23 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/27 18:50:10 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
	
		Fixed(void);
		Fixed(const Fixed &);
		~Fixed(void);	
		Fixed	&operator=(const Fixed &);

		int	getRawBits( void ) const;
		void	setRawBits( int const raw );

	private:

		int			rawBits;
		static const int	fixed = 8;
};

#endif
