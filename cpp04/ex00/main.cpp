/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 21:54:14 by mtellal           #+#    #+#             */
/*   Updated: 2022/04/17 18:00:09 by mtellal          ###   ########.fr       */
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
	
	Dog o;
	const Dog* p = &o;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << meta->getType() << std::endl;
	
	p->makeSound();
	std::cout << p->getType() << std::endl;
	
	WrongAnimal		a;
	const WrongAnimal*	pa;
	const WrongAnimal*	base_a = new WrongCat();
	
	WrongCat		b;
	const WrongCat*		pb;
	const WrongCat		copy_b(b);

	pa = &a;
	pb = &b;
	
	std::cout << "WrongAnimal a" << std::endl << a.getType();
	a.makeSound();
	std::cout << std::endl;
	
	std::cout << "WrongAnimal pa -> a" << pa->getType();
	pa->makeSound();
	std::cout << std::endl;
	
	std::cout << "WrongAnimal base_a" << base_a->getType();
	base_a->makeSound();
	std::cout << std::endl;

	std::cout << "WrongCat b" << b.getType();
	b.makeSound();
	std::cout << std::endl;

	std::cout << "WrongCat pb" << pb->getType();
	pb->makeSound();
	std::cout << std::endl;

	std::cout << "WrongCat copy_b" << copy_b.getType();
	copy_b.makeSound();
	std::cout << std::endl;

	return (0);
}
