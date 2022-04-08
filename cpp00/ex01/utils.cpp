/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:11:45 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/07 18:41:06 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

void    printChar(int i, char c)
{
        while (i > 0)
        {
                std::cout << c;
                i--;
        }
}

void    printString(std::string s)
{
        int     i;
        int     len;

        i = 0;
        len = s.size();
        if (len > 9)
        {
                while (i < 8)
                {
                        std::cout << s[i];
                        i++;
                }
                std::cout << ".";
        }
        else
        {
                printChar(9 - len, ' ');
                while (i < len)
                {
                        std::cout << s[i];
                        i++;
                }
        }
        std::cout << "|";
}

int	ft_index(std::string s)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (s == "")
		return (-1);
	while (s != "" && s[i] >= '0' && s[i] <= '9')
	{
		nb = nb * 10 + (s[i] - '0');
		i++;
	}
	if (s[0] < '0' || s[0] > '9')
		return (-1);
	return (nb);
}

