/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:02:24 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/08 20:14:28 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string	s = "HI THIS IS BRAIN";
	std::string	*stringPTR = &s;
	std::string	&stringREF(s);

	std::cout << "address string = " << &s << std::endl;
	std::cout << "address stringPTR = " << stringPTR << std::endl;
	std::cout << "address stringREF = " << &stringREF << std::endl;
	std::cout << "value string = " << s << std::endl;
	std::cout << "value stringPTR = " << *stringPTR << std::endl;
	std::cout << "value stringREF = " << stringREF << std::endl;
	
	return (0);
}
