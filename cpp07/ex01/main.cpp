/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:11:23 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/18 18:11:15 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int		l = 5;

	std::cout << std::fixed << std::setprecision(1) << std::endl;

        {
                char    *tabc = new char[l];

                std::cout << "	TESTS CHAR" << std::endl;
                std::cout << "tabc before iter()" << std::endl;
                setTab(tabc, l, 'c'); 
                displayTab(tabc, l);
                
                iter(tabc, l, print<char>);

                std::cout << std::endl;

                delete [] tabc;
        }

        {
                int    *tabi = new int[l];

                std::cout << "  TESTS INT" << std::endl;
                std::cout << "tabi before iter()" << std::endl;
                setTab(tabi, l, -1); 
                displayTab(tabi, l);

                iter(tabi, l, print<int>);

                std::cout << std::endl;

                delete [] tabi;
        }

        {
                float   *tabf = new float[l];

                std::cout << "  TESTS FLOAT" << std::endl;
                std::cout << "tabf before iter()" << std::endl;
                setTab(tabf, l, -1.2f); 
                displayTab(tabf, l);

                iter(tabf, l, print<float>);

                std::cout << std::endl;

                delete [] tabf;
        }

        {
                double  *tabd = new double[l];
                
                std::cout << "  TESTS DOUBLE" << std::endl;
                std::cout << "tabd before iter()" << std::endl;
                setTab(tabd, l, -2.5); 
                displayTab(tabd, l);

                iter(tabd, l, print<double>);

                std::cout << std::endl;

                delete [] tabd;
        }

        {
                std::string     *tabs = new std::string[l];
                
                std::cout << "  TESTS STRING" << std::endl;
                std::cout << "tabs before iter()" << std::endl;
                setTab(tabs, l, std::string("uneChaine")); 
                displayTab(tabs, l);

                iter(tabs, l, print<std::string>);

                std::cout << std::endl;

                delete [] tabs;
        }


	return (0);
}
