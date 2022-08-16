/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isType.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:53:57 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/16 21:00:52 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

bool    isChar(char *s)
{
        int     i = 0;

        if (((s[i] >= 'A' && s[i] <= 'Z')
                        || (s[i] <= 'z' && s[i] >= 'a'))
                        && !s[i + 1])
                        return (true);
        return (false);
}

bool    isInt(char *s)
{
        int    		i = 0;
	long int	a = std::atol(s);

        if (s[i] == '-' || s[i] == '+')
                s++;
        while (s[i])
        {
                if (s[i] < '0' || s[i] > '9')
                        return (false);
                i++;
        }
        if (!s[i] && i <= 10 && (a <= INT_MAX && a >= INT_MIN))
                return (true);
        return (false);
}

bool    isFloat(char *s)
{
        int     	i = 0;
        int     	nbPoint = 0;
	double		f = std::stod(s);

	if (s[i] == '-' || s[i] == '+')
		s++;
        while (s[i] && s[i] != 'f')
        {
                if (s[i] < '0' || s[i] > '9')
                {
                        if (s[i] == '.')
				nbPoint++;
			else
                                return (false);
                }
                i++;
        }
        if (s[i] == 'f' && !s[i + 1] && i <= 57 && nbPoint <= 1 
			&& i > 0 && s[i - 1] != '.'
			&& (f >= FLT_MIN && f <= FLT_MAX))
                return (true);
	return (false);
}

bool    isDouble(char *s)
{
        int     i = 0;
        int     nbPoint = 0;

        if (s[i] == '-' || s[i] == '+')
                s++;
        while (s[i])
        {
                if (s[i] < '0' || s[i] > '9')
                {
                        if (s[i] == '.')
                                nbPoint++;
                        else
                                return (false);
                }
                i++;
        }
        if (!s[i] && i <= 327 && nbPoint <= 1 
                        && i > 0 && s[i - 1] != '.' )
                return (true);
	return (false);
}

