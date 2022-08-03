/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:41:24 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/01 12:04:17 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	static void (Harl::*tab[4])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	ptr = tab;
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl deleted" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to  speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = 0;
	
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4)
	{
		if (tab[i] == level)
		{
			(this->*ptr[i])();
			break ;
		}
		i++;
	}
}

