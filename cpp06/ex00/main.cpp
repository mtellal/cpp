/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 10:39:24 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/16 14:29:24 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
	{
		std::cout << "bad inputs" << std::endl;
		return (0);
	}

	std::cout << std::fixed << std::setprecision(1);

	Scalar	s;
	
	s.handleConversion(argv[1]);

}
