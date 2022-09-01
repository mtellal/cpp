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

void	clearTab(Animal **t)
{
	int	i = 0;
	
	std::cout << std::endl;
	while (i < 4)
	{
		delete t[i];
		i++;
	}
}

void	initTab(Animal **t)
{
	int	i = 0;

	while (i < 4)
	{
		if (i % 2)
			t[i] = new Dog();
		else
			t[i] = new Cat();
		i++;
	}
	std::cout << std::endl;
}

void	printXIdeas(int x, Brain *brain)
{
	int	i = 0;

	while (i < x && i < 100)
	{
		std::cout << brain->getIdea(i) << std::endl;
		i++;
	}
}

void	printDogIdea(unsigned int i, const Dog &obj)
{
	std::cout << obj.getType() << " idea " << i << " = " << obj.getIdea(i) << std::endl;
}

void	printCatIdea(unsigned int i, const Cat &obj)
{
	std::cout << obj.getType() << " idea " << i << " = " << obj.getIdea(i) << std::endl;
}

int	main()
{
	std::cout << "////	Heap tests 	////" << std::endl << std::endl;

	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const Animal* x = new Animal();

	std::cout << std::endl;
	x->makeSound();
	std::cout << std::endl;
	j->makeSound();
	std::cout << std::endl;
	i->makeSound();
	std::cout << std::endl;

	delete i;
	delete j;
	delete x;

	std::cout << std::endl <<  "////	Deep copy tests		////" << std::endl << std::endl;

	std::cout << " WITH DOGS" << std::endl;

	{
		Dog	dog;
		Dog	copyDog;
		
		std::cout << std::endl; 
		
		dog.setIdea(0, "ouaf");
		printDogIdea(0, dog);
		
		Dog dog2(dog);
		printDogIdea(0, dog2);

		copyDog = dog;
		printDogIdea(0, copyDog);
	}	

	std::cout << std::endl << " WITH CATS" << std::endl;
	
	{
		Cat	cat;
		Cat	copyCat;
	
		std::cout << std::endl;

		cat.setIdea(0, "miaou");
		printCatIdea(0, cat);
		
		Cat cat2(cat);
		printCatIdea(0, cat2);

		copyCat = cat;
		printCatIdea(0, copyCat);

	}
	
	std::cout << std::endl << " WITH ANIMALS" << std::endl;

	{

		Animal	*t[4];

		initTab(t);

		t[0]->makeSound();
		t[1]->makeSound();

		clearTab(t);
	
	}
	
	return (0);
}