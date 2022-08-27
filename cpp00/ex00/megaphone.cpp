/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:14:18 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/22 15:51:04 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	display(char *s, int space = 0)
{
	int 	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			std::cout << (char)(s[i] - 32);
		else
			std::cout << s[i];
		i++;
	}
	if (space && i > 0  && s[i - 1] != ' ')
		std::cout << " ";
}

int	strlen(char *s)
{
	int	i = 0;

	while (s && s[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (i != argc - 1 && argv[i + 1][0] != ' ')
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
