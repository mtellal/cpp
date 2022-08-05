/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:54:14 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/05 13:33:33 by mtellal          ###   ########.fr       */
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

	while (i < x)
	{
		std::cout << brain->getIdeas(i) << std::endl;
		i++;
	}
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

	Brain	brain;

	Dog	dog;
	Dog	copyDog;
	
	brain.setIdeas(0, "Dog ideas");
	dog.setBrain(&brain);

	std::cout << std::endl << "dog type = " << dog.getType() << " | sound = ";
	dog.makeSound();
	std::cout << "dog ideas = " << dog.getIdeas(0) << std::endl << std::endl;
	copyDog = dog;
	std::cout << "copydog type = " << copyDog.getType() << " | sound = ";
        copyDog.makeSound();
        std::cout << "copyDog ideas = " << copyDog.getIdeas(0) << std::endl << std::endl;
	
	Dog	ccopyDog(dog);
	std::cout << std::endl << "ccopydog type = " << ccopyDog.getType() << " | sound = ";
        ccopyDog.makeSound();
        std::cout << "ccopyDog ideas = " << ccopyDog.getIdeas(0) << std::endl << std::endl;

	Cat 	cat;
	Cat	copyCat;

        brain.setIdeas(1, "Cat ideas");
        cat.setBrain(&brain);

        std::cout << std::endl << "cat type = " << cat.getType() << " | sound = ";
        cat.makeSound();
        std::cout << "cat ideas = " << cat.getIdeas(0) << std::endl << std::endl;
        copyCat = cat;
        std::cout << "copyCat type = " << copyCat.getType() << " | sound = ";
        copyCat.makeSound();
        std::cout << "copyCat ideas = " << copyCat.getIdeas(0) << std::endl << std::endl;

        Cat     ccopyCat(cat);
        std::cout << std::endl << "ccopyCat type = " << ccopyCat.getType() << " | sound = ";
        ccopyCat.makeSound();
        std::cout << "ccopyCat ideas = " << ccopyCat.getIdeas(0) << std::endl << std::endl;

	Animal	*t[4];

	initTab(t);

	t[0]->makeSound();
	t[1]->makeSound();

	clearTab(t);
	
	return (0);
}
