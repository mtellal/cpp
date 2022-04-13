/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:41:47 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/13 14:23:01 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	h;

	std::cout << "///// DEBUG /////" << std::endl;
	h.complain("DEBUG");
	std::cout << "///// INFO /////" << std::endl;
	h.complain("INFO");
	std::cout << "///// WARNING /////" << std::endl;
	h.complain("WARNING");
	std::cout << "///// ERROR /////" << std::endl;
	h.complain("ERROR");
	return (0);
}
