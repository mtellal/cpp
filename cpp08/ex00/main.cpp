/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:16:39 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/25 11:35:22 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

void	displayFind(int index, int i)
{
	if (index > -1)
		std::cout << i << " was found at position " << index << std::endl;
	else
		std::cout << i << " was not found" << std::endl;
}

int main()
{
	std::array<int, 5> a = {0, 1, 2, 3, 4};
	std::vector<int> v = {4, 3, 2, 1, 0};

	displayFind(easyFind(a, 2), 2);
	displayFind(easyFind(v, 0), 0);
	return (0);
}
