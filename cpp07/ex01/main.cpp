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

void	setTabc(char &c)
{
	c = '0';
}

void	setTabi(int &i)
{
	i = -1;
}

void	setTabf(float &f)
{
	f = -1.0f;
}

void	setTabd(double &d)
{
	d = -1.0;
}

void	setTabs(std::string &s)
{
	s = "chaine";
}

int main()
{
	int		l = 5;
	char		*tabc = new char[l];
	int		*tabi = new int[l];
	float		*tabf = new float[l];
	double		*tabd = new double[l];
	std::string	*tabs = new std::string[l];

	std::cout << std::fixed << std::setprecision(1) << std::endl;

	std::cout << "	TESTS CHAR" << std::endl;
	std::cout << "tabc before iter()" << std::endl; 
	displayTab(tabc, l);
	iter(tabc, l, setTabc);
	std::cout << "tabc after iter()" << std::endl; 
	displayTab(tabc, l);	
	std::cout << std::endl;

	std::cout << "  TESTS INT" << std::endl;
        std::cout << "tabi before iter()" << std::endl;
        displayTab(tabi, l);
        iter(tabi, l, setTabi);
        std::cout << "tabi after iter()" << std::endl;
        displayTab(tabi, l);
        std::cout << std::endl;
	
	std::cout << "  TESTS FLOAT" << std::endl;
        std::cout << "tabf before iter()" << std::endl;
        displayTab(tabf, l);
        iter(tabf, l, setTabf);
        std::cout << "tabf after iter()" << std::endl;
        displayTab(tabf, l);
        std::cout << std::endl;

	std::cout << "  TESTS DOUBLE" << std::endl;
        std::cout << "tabd before iter()" << std::endl;
        displayTab(tabd, l);
        iter(tabd, l, setTabd);
        std::cout << "tabd after iter()" << std::endl;
        displayTab(tabd, l);
        std::cout << std::endl;

	std::cout << "  TESTS STRING" << std::endl;
        std::cout << "tabs before iter()" << std::endl;
        displayTab(tabs, l);
        iter(tabs, l, setTabs);
        std::cout << "tabs after iter()" << std::endl;
        displayTab(tabs, l);
        std::cout << std::endl;


	return (0);
}
