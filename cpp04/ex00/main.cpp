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
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	std::cout << meta->getType() << std::endl << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl << "/***			ADDED TESTS		***/" << std::endl << std::endl;

	std::cout << "WITH DOGS" << std::endl;

	{

		Dog				dog;
		Dog				dog2(dog);
		Dog				dog3;
		Dog				*pdog = new Dog();
		const Dog		*cpdog = new Dog();
		Animal			*animal = new Dog();
		const Animal	*canimal = new Dog();

		dog3 = dog;
		std::cout << std::endl << dog.getType() << std::endl;
		dog.makeSound();
		std::cout << std::endl << dog2.getType() << std::endl;
		dog2.makeSound();
		std::cout << std::endl << dog3.getType() << std::endl;
		dog3.makeSound();
		std::cout << std::endl << pdog->getType() << std::endl;
		pdog->makeSound();
		std::cout << std::endl << cpdog->getType() << std::endl;
		cpdog->makeSound();
		std::cout << std::endl << animal->getType() << std::endl;
		animal->makeSound();
		std::cout << std::endl << canimal->getType() << std::endl;
		canimal->makeSound();
		std::cout << std::endl;	

		delete pdog;
		delete cpdog;
		delete animal;
		delete canimal;
	}

	std::cout << std::endl << "WITH CATS" << std::endl;

	{

		Cat				cat;
		Cat				cat2(cat);
		Cat				cat3;
		Cat				*pcat = new Cat();
		const Cat		*cpcat= new Cat();
		Animal			*animal = new Cat();
		const Animal	*canimal = new Cat();

		cat3 = cat;
		std::cout << std::endl << cat.getType() << std::endl;
		cat.makeSound();
		std::cout << std::endl << cat2.getType() << std::endl;
		cat2.makeSound();
		std::cout << std::endl << cat3.getType() << std::endl;
		cat3.makeSound();
		std::cout << std::endl << pcat->getType() << std::endl;
		pcat->makeSound();
		std::cout << std::endl << cpcat->getType() << std::endl;
		cpcat->makeSound();
		std::cout << std::endl << animal->getType() << std::endl;
		animal->makeSound();
		std::cout << std::endl << canimal->getType() << std::endl;
		canimal->makeSound();
		std::cout << std::endl;	

		delete pcat;
		delete cpcat;
		delete animal;
		delete canimal;
	}
	
	{

		WrongCat			wcat;
		WrongCat			wcat2(wcat);
		WrongCat			wcat3;
		WrongCat			*pwcat = new WrongCat();
		const WrongCat		*cpwcat= new WrongCat();
		WrongAnimal			*animal = new WrongCat();
		const WrongAnimal	*canimal = new WrongCat();

		wcat3 = wcat;
		std::cout << std::endl << wcat.getType() << std::endl;
		wcat.makeSound();
		std::cout << std::endl << wcat2.getType() << std::endl;
		wcat2.makeSound();
		std::cout << std::endl << wcat3.getType() << std::endl;
		wcat3.makeSound();
		std::cout << std::endl << pwcat->getType() << std::endl;
		pwcat->makeSound();
		std::cout << std::endl << cpwcat->getType() << std::endl;
		cpwcat->makeSound();
		std::cout << std::endl << animal->getType() << std::endl;
		animal->makeSound();
		std::cout << std::endl << canimal->getType() << std::endl;
		canimal->makeSound();
		std::cout << std::endl;	

		delete pwcat;
		delete cpwcat;
		delete animal;
		delete canimal;
	}
	

	return (0);
}
