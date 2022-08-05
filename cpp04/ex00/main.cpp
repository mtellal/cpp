/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:54:14 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/04 15:05:32 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << meta->getType() << std::endl << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "/***			ADDED TESTS		***/" << std::endl << std::endl;

	Dog		dog;
	Dog		dog2(dog);
	const Dog	*pdog = &dog2;

	std::cout << std::endl;

	Cat		cat;
	Cat		cat2(cat);
	const Cat	*pcat = &cat2;

	std::cout << std::endl;

	const WrongAnimal	*wa = new WrongCat();
	const WrongAnimal	*wa2 = new WrongAnimal();

	std::cout << std::endl << dog.getType() << std::endl;
	dog.makeSound();
	std::cout << std::endl << pdog->getType() << std::endl;
	pdog->makeSound();
	std::cout << std::endl;	

	std::cout << std::endl << cat.getType() << std::endl;
        cat.makeSound();
        std::cout << std::endl << pcat->getType() << std::endl;
        pcat->makeSound();                              
        std::cout << std::endl;

	std::cout << std::endl << wa->getType() << std::endl;
        wa->makeSound();
        std::cout << std::endl << wa2->getType() << std::endl;
        wa2->makeSound();

	wa2 = wa;

	std::cout << std::endl << wa2->getType() << std::endl;
	wa2->makeSound();
        std::cout << std::endl;
	
	return (0);
}
