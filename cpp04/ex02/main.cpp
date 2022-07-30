/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:54:14 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 17:20:53 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	//Animal	A;
	Dog	a;
	

	Cat	b;

	std::cout << " ///// set 10 first ideas (Dog) ///// " << std::endl;
	a.setAnimalIdeas(10);
	std::cout << " ///// display 10 first ideas (Dog) //// " << std::endl;
	a.displayAnimalIdeas(10);

	std::cout << " ///// set 10 first ideas (Cat) ///// " << std::endl;
	b.setAnimalIdeas(10);
	std::cout << " ///// display 10 first ideas (Cat) ///// " << std::endl;
	b.displayAnimalIdeas(10);

	return (0);
}
