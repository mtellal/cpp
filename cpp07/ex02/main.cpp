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
        while (tab.getTab() && i < tab.size())
        {
                tab[i] = e;
                i++;
        }
}

template <class T>
void	tryIndex(Array<T> &t, int i)
{
	try
	{
		T var = t[i];
		std::cout << "index[" << i << "] = " << var << std::endl;
		(void)var;
	} catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
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

	{
		std::cout << "	TESTS CHAR" << std::endl;

		Array<char>		tabc(5);

		tabc.displayTab();
		setTab(tabc, 'c');
		try
		{
			tabc[0] = '1';
			tabc[3] = '4';
		} catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		tabc.displayTab();

		{
			Array<char>	defaultTab;
			Array<char>	copy(tabc);

			defaultTab = tabc;
			defaultTab.displayTab();
			copy.displayTab();

			try
			{
				copy[2] = '3';
				defaultTab = copy;
				defaultTab[1] = '2';
			} catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			tabc = defaultTab;
		}

		tabc.displayTab();
	
		tryIndex(tabc, -1);
		tryIndex(tabc, 6);
		tryIndex(tabc, 4);

	}

	{
		std::cout << std::endl << "	TESTS INT" << std::endl;

		Array<int>		tabi(5);

		tabi.displayTab();
		setTab(tabi, 5);
		try
		{
			tabi[2] = -3;
			tabi[4] = -5;
		} catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		tabi.displayTab();

		{
			Array<int>	defaultTab;
			Array<int>	copy(tabi);

			defaultTab = tabi;
			defaultTab.displayTab();
			copy.displayTab();

			try
			{
				copy[0] = -1;
				defaultTab = copy;
				defaultTab[3] = -4;
			} catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			tabi = defaultTab;
		}

		tabi.displayTab();

		tryIndex(tabi, -1);
		tryIndex(tabi, 6);
		tryIndex(tabi, 4);
	
	}
	
	{
		std::cout << std::endl << "	TESTS FLOAT" << std::endl;

		Array<float>		tabf(5);

		tabf.displayTab();
		setTab(tabf, 1.1f);
		try
		{
			tabf[2] = 2.3f;
			tabf[0] = 6.5f;
		} catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		tabf.displayTab();

		{
			Array<float>	defaultTab;
			Array<float>	copy(tabf);

			defaultTab = tabf;
			defaultTab.displayTab();
			copy.displayTab();

			try
			{
				copy[1] = -0.5;
				defaultTab = copy;
				defaultTab[4] = -4.2;
			} catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			tabf = defaultTab;
		}

		tabf.displayTab();

		tryIndex(tabf, -1);
		tryIndex(tabf, 6);
		tryIndex(tabf, 4);
	
	}

	{
		std::cout << std::endl << "	TESTS DOUBLE" << std::endl;

		Array<double>		tabd(5);

		tabd.displayTab();
		setTab(tabd, 2.2);
		try
		{
			tabd[2] = 8.1;
			tabd[4] = 2.5;
		} catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		tabd.displayTab();

		{
			Array<double>	defaultTab;
			Array<double>	copy(tabd);

			defaultTab = tabd;
			defaultTab.displayTab();
			copy.displayTab();

			try
			{
				copy[1] = -0.5;
				defaultTab = copy;
				defaultTab[4] = -4.2;
			} catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			tabd = defaultTab;
		}

		tabd.displayTab();

		tryIndex(tabd, -1);
		tryIndex(tabd, 6);
		tryIndex(tabd, 4);
	
	}

	{
		std::cout << std::endl << "	TESTS STRING" << std::endl;

		Array<std::string>		tabs(5);

		tabs.displayTab();
		std::string param = "unseChaine";
		setTab(tabs, param);
		try
		{
       		tabs[3] = "chaine4";
        	tabs[4] = "chaine5";
		} catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		tabs.displayTab();

		{
			Array<std::string>	defaultTab;
			Array<std::string>	copy(tabs);

			defaultTab = tabs;
			defaultTab.displayTab();
			copy.displayTab();

			try
			{
				copy[1] = "chaine2";
				defaultTab = copy;
				defaultTab[2] = "chaine3";
			} catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			tabs = defaultTab;
		}

		tabs.displayTab();

		tryIndex(tabs, -1);
		tryIndex(tabs, 6);
		tryIndex(tabs, 4);
	
	}

	std::cout << std::endl;

	return (0);
}
