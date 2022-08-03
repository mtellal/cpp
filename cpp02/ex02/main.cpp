/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:26:34 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 11:09:25 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	Fixed		c(42.42f);
	Fixed		d(-5.2f);
	Fixed		a;


	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	a = Fixed(5) + Fixed(2.5f);
	
	std::cout << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl << std::endl;

	std::cout << " !!! < operator !!! " << std::endl;
	std::cout << a << " < " << b << " = " << (a < d) << std::endl;
	std::cout << b << " < " << c << " = " << (b < c) << std::endl;
	std::cout << c << " < " << d << " = " << (c < d) << std::endl << std::endl;

	std::cout << " !!! > operator !!! " << std::endl;
	std::cout << a << " > " << d << " = " << (a > d) << std::endl;
	std::cout << b << " > " << c << " = " << (b > c) << std::endl;
	std::cout << c << " > " << d << " = " << (c > d) << std::endl << std::endl;;
	
	Fixed	e(5);
	Fixed	f(5.5f);
	std::cout << " !!! >= operator !!! " << std::endl;
	std::cout << f << " >= " << e << " = " << (f >= e) << std::endl;
	std::cout << a << " >= " << e << " = " << (a >= e) << std::endl;
	std::cout << b << " >= " << d << " = " << (b >= d) << std::endl << std::endl;
	
	std::cout << " !!! == operator !!! " << std::endl;
        std::cout << f << " == " << e << " = " << (f == e) << std::endl;
        std::cout << e << " == " << e << " = " << (e == e) << std::endl;
        std::cout << b << " == " << d << " = " << (b == d) << std::endl << std::endl;

	std::cout << " !!! + operator !!! " << std::endl;
        std::cout << f << " + " << e << " = " << (f + e) << std::endl;
        std::cout << a << " + " << e << " = " << (a + e) << std::endl << std::endl;
	
	std::cout << " !!! - operator !!! " << std::endl;
        std::cout << f << " - " << e << " = " << (f - e) << std::endl;
        std::cout << a << " - " << e << " = " << (a - e) << std::endl << std::endl;

	std::cout << " !!! * operator !!! " << std::endl;
        std::cout << f << " * " << e << " = " << f.toFloat() * e.toFloat() << std::endl;
        std::cout << a << " * " << e << " = " << (a * e) << std::endl;

	std::cout << " !!! ++ operator !!! " << std::endl;
	Fixed	g;
	std::cout << "g = " << g << " ++g = " << ++g << std::endl;
	std::cout << "g = " << g << " ++g = " << ++g << std::endl;
	std::cout << "a = " << a << " ++a = " << ++a << std::endl << std::endl;
	
	std::cout << " !!! -- operator !!! " << std::endl;
        std::cout << "g = " << g << " --g = " << --g << std::endl;
        std::cout << "g = " << g << " --g = " << --g << std::endl;
        std::cout << "a = " << a << " --a = " << --a << std::endl << std::endl;

	std::cout << " !!! operator ++ !!! " << std::endl;
        std::cout << "g = " << g << " g++ = " << g++ << std::endl;
        std::cout << "g = " << g << " g++ = " << g++ << std::endl;
        std::cout << "a = " << a << " a++ = " << a++ << std::endl << std::endl;

	std::cout << " !!! operator -- !!! " << std::endl;
        std::cout << "g = " << g << " g-- = " << g-- << std::endl;
        std::cout << "g = " << g << " g-- = " << g-- << std::endl;
        std::cout << "a = " << a << " a-- = " << a-- << std::endl << std::endl;

	return (0);
}
