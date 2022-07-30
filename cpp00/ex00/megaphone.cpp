/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:14:18 by mtellal           #+#    #+#             */
/*   Updated: 2022/07/20 11:14:21 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	display(char *s, int space = 0)
{
	int 	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			std::cout << (char)(s[i] - 32);
		else
			std::cout << s[i];
		i++;
	}
	if (space)
		std::cout << " ";
}


int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (i != argc - 1)
				display(argv[i], 1);
			else
				display(argv[i]);
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}
