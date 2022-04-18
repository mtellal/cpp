/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:54:14 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/18 15:25:10 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
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
