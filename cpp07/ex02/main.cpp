/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:53:06 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/19 20:19:32 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 750

template <class T>
void    setTab(Array<T> &tab, T e)
{
        unsigned int    i;

        i = 0;
        while (i < tab.size())
        {
                tab[i] = e;
                i++;
        }
        std::cout << std::endl;
}


int main()
{

	{
		std::cout << std::endl << "	DEFAULT MAIN" << std::endl; 
		
		Array<int>	numbers(MAX_VAL);
		int*		mirror = new int[MAX_VAL];
		
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}
		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}

		delete [] mirror;//
	}

	std::cout << std::endl << "	MY TESTS" << std::endl << std::endl;

	Array<char>		tabc(5);
	Array<int>		tabi(5);
	Array<float>		tabf(5);
	Array<double>		tabd(5);
	Array<std::string>	tabs(5);

	std::cout << "	TESTS CHAR" << std::endl;
	setTab(tabc, 'c');
	tabc[0] = '1';
	tabc[3] = '4';
	tabc.displayTab();
	
	std::cout << "	TESTS INT" << std::endl;
	setTab(tabi, 5);
	tabi[2] = -1;
	tabi[4] = -3;
	tabi.displayTab();

	std::cout << "	TEST FLOAT" << std::endl;
	setTab(tabf, 1.1f);
	tabf[2] = 2.3f;
	tabf[0] = 6.5f;
	tabf.displayTab();

	std::cout << "	TEST DOUBLE" << std::endl;
	setTab(tabd, 2.2);
	tabd[2] = 8.1;
	tabd[4] = 2.5;
	tabd.displayTab();

	std::cout << "	TEST STRING" << std::endl;
	std::string	s("uneChaine");
	setTab(tabs, s);
       	tabs[3] = "chaine1";
        tabs[4] = "chaine2";
        tabs.displayTab();

	std::cout << std::endl << "try to access to an inexistd value" << std::endl;
	try
	{
		std::cout << "tabs[5] = " << tabs[5] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	return (0);
}
