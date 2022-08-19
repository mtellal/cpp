/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:53:06 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/19 11:56:12 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<char>		tabc(5);
	Array<int>		tabi(5);
	Array<float>		tabf(5);
	Array<double>		tabd(5);
	Array<std::string>	tabs(5);

	std::cout << "	TESTS CHAR" << std::endl;
	tabc[0] = '1';
	tabc[3] = '4';
	tabc.displayTab();
	
	std::cout << "	TESTS INT" << std::endl;
	tabi[2] = -1;
	tabi[4] = -3;
	tabi.displayTab();

	std::cout << "	TEST FLOAT" << std::endl;
	tabf[2] = 2.3f;
	tabf[0] = 6.5f;
	tabf.displayTab();

	std::cout << "	TEST DOUBLE" << std::endl;
	tabd[2] = 8.1;
	tabd[4] = 2.5;
	tabd.displayTab();

	std::cout << "  TEST STRING" << std::endl;
        tabs[3] = "chaine1";
        tabs[4] = "chaine2";
        tabs.displayTab();

	std::cout << std::endl;
	return (0);
}
