/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:41:16 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/18 16:09:41 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "Data.hpp"

int main()
{
	{
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	{
		char	c1 = 'a';
		char	c2 = 'b';

		std::cout << std::endl << "	TESTS SUR LES CHAR	" << std::endl;
		std::cout << "c1 = " << c1 << " c2 = " << c2 << std::endl;
		std::cout << "swap(" << c1 << "," << c2 << ")" << std::endl;
		swap(c1, c2);
		std::cout << "c1 = " << c1 << " c2 = " << c2 << std::endl;
		swap(c1, c2);
		std::cout << "min(" << c1 << "," << c2 << ") = " << min(c1, c2) << std::endl;
		std::cout << "max(" << c1 << "," << c2 << ") = " << max(c1, c2) << std::endl;
	}

	{
		int	i1 = 0;
		int	i2 = 1;

		std::cout << std::endl << "	TESTS SUR LES INT      " << std::endl;
		std::cout << "i1 = " << i1 << " i2 = " << i2 << std::endl;
		std::cout << "swap(" << i1 << "," << i2 << ")" << std::endl;
		swap(i1, i2);
		std::cout << "i1 = " << i1 << " i2 = " << i2 << std::endl;
		swap(i1, i2);
		std::cout << "min(" << i1 << "," << i2 << ") = " << min(i1, i2) << std::endl;
		std::cout << "max(" << i1 << "," << i2 << ") = " << max(i1, i2) << std::endl;
	
	}
	
	{
		float	f1 = 1.1f;
		float	f2 = 1.2f;

		std::cout << std::endl << "	TESTS SUR LES FLAOT      " << std::endl;
		std::cout << "f1 = " << f1 << " f2 = " << f2 << std::endl;
		std::cout << "swap(" << f1 << "," << f2 << ")" << std::endl;
		swap(f1, f2);
		std::cout << "f1 = " << f1 << " f2 = " << f2 << std::endl;
		swap(f1, f2);
		std::cout << "min(" << f1 << "," << f2 << ") = " << min(f1, f2) << std::endl;
		std::cout << "max(" << f1 << "," << f2 << ") = " << max(f1, f2) << std::endl;
	}

	{
		double	d1 = 2.5;
		double	d2 = 3.1;

		std::cout << std::endl << "	TESTS SUR LES DOUBLE      " << std::endl;
        std::cout << "d1 = " << d1 << " d2 = " << d2 << std::endl;
        std::cout << "swap(" << d1 << "," << d2 << ")" << std::endl;
		swap(d1, d2);
        std::cout << "d1 = " << d1 << " d2 = " << d2 << std::endl;
        swap(d1, d2);
		std::cout << "min(" << d1 << "," << d2 << ") = " << min(d1, d2) << std::endl;
        std::cout << "max(" << d1 << "," << d2 << ") = " << max(d1, d2) << std::endl;
	}

	{
		Data		D1(5);
		Data		D2(10);

		std::cout << std::endl << "	TESTS SUR LES CLASSES      " << std::endl;
        std::cout << "s1 = " << D1 << " s2 = " << D2 << std::endl;
        std::cout << "swap(" << D1 << "," << D2 << ")" << std::endl;
		swap(D1, D2);
        std::cout << "D1 = " << D1 << " D2 = " << D2 << std::endl;
        swap(D1, D2);
		std::cout << "min(" << D1 << "," << D2 << ") = " << min(D1, D2) << std::endl;
        std::cout << "max(" << D1 << "," << D2 << ") = " <<  max(D1, D2) << std::endl << std::endl;
	}

	return (0);
}
