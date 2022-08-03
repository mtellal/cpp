/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:11:23 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/01 16:36:50 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	int			f;
	static const int	ffract = 8;
	
	public:
	
	Fixed(void);
	Fixed(const Fixed &);
	~Fixed(void);	
	Fixed	&operator=(const Fixed &);

	int	getRawBits( void );
	void	setRawBits( int const raw );
};

#endif
