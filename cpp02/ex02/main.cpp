/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:26:34 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/28 18:11:40 by mtellal          ###   ########.fr       */
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

	std::cout << std::endl << "///////////	Comparison operators	//////////////" << std::endl << std::endl;

	std::cout << " !!! < operator !!! " << std::endl;
	std::cout << a << " < " << b << " = " << (a < b) << std::endl;
	std::cout << b << " < " << c << " = " << (b < c) << std::endl;
	std::cout << c << " < " << d << " = " << (c < d) << std::endl << std::endl;

	std::cout << " !!! > operator !!! " << std::endl;
	std::cout << a << " > " << d << " = " << (a > d) << std::endl;
	std::cout << b << " > " << c << " = " << (b > c) << std::endl;
	std::cout << c << " > " << d << " = " << (c > d) << std::endl << std::endl;;
	
	Fixed	e(5);
	Fixed	f(5.5f);
	Fixed	equal(5.5f);
	std::cout << " !!! >= operator !!! " << std::endl;
	std::cout << f << " >= " << equal << " = " << (f >= equal) << std::endl;
	std::cout << a << " >= " << e << " = " << (a >= e) << std::endl;
	std::cout << b << " >= " << d << " = " << (b >= d) << std::endl << std::endl;
	
	std::cout << " !!! <= operator !!! " << std::endl;
        std::cout << f << " <= " << equal << " = " << (f <= equal) << std::endl;
        std::cout << a << " <= " << e << " = " << (a <= e) << std::endl;
        std::cout << b << " <= " << d << " = " << (b <= d) << std::endl << std::endl;

	std::cout << " !!! == operator !!! " << std::endl;
        std::cout << f << " == " << equal << " = " << (f == equal) << std::endl;
        std::cout << e << " == " << e << " = " << (e == e) << std::endl;
        std::cout << b << " == " << d << " = " << (b == d) << std::endl << std::endl;

	std::cout << " !!! != operator !!! " << std::endl;
        std::cout << f << " != " << equal << " = " << (f != equal) << std::endl;
        std::cout << a << " != " << e << " = " << (a != e) << std::endl;
        std::cout << b << " != " << d << " = " << (b != d) << std::endl << std::endl;
	
	
	std::cout << std::endl << "///////////  Arithmetic operators   //////////////" << std::endl << std::endl;	
	
	std::cout << " !!! + operator !!! " << std::endl;
        std::cout << f << " + " << e << " = " << (f + e) << std::endl;
        std::cout << a << " + " << e << " = " << (a + e) << std::endl << std::endl;
	
	std::cout << " !!! - operator !!! " << std::endl;
        std::cout << f << " - " << e << " = " << (f - e) << std::endl;
        std::cout << a << " - " << e << " = " << (a - e) << std::endl << std::endl;

	std::cout << " !!! * operator !!! " << std::endl;
        std::cout << f << " * " << e << " = " << (f * e) << std::endl;
        std::cout << a << " * " << e << " = " << (a * e) << std::endl << std::endl;

	std::cout << " !!! / operator !!! " << std::endl;
        std::cout << f << " / " << e << " = " << (f / e) << std::endl;
        std::cout << a << " / " << e << " = " << (a / e) << std::endl;

	std::cout << std::endl << "///////////  in/decrement operators   //////////////" << std::endl << std::endl;

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

	Fixed const	mini(5);
	Fixed const	maxi(6);
	Fixed 		minf(5.2f);
	Fixed		maxf(5.3f);

	std::cout << " !!! min  !!! " << std::endl;
        std::cout << "min(" << mini << ", " << maxi << ") = " << Fixed::min(mini, maxi) << std::endl;
        std::cout << "min(" << minf << ", " << maxf << ") = " << Fixed::min(minf, maxf) << std::endl << std::endl;

	std::cout << " !!! max  !!! " << std::endl;
        std::cout << "max(" << mini << ", " << maxi << ") = " << Fixed::max(mini, maxi) << std::endl;
        std::cout << "max(" << minf << ", " << maxf << ") = " << Fixed::max(minf, maxf) << std::endl << std::endl;



	return (0);
}
