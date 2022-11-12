/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:50:53 by mtellal           #+#    #+#             */
/*   Updated: 2022/09/06 16:49:31 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data		*s = new Data();
	Data		*d = NULL;
	uintptr_t	ptr;

	s->data = 5;
	s->i = 8;
	s->j = 9;
	s->s = "hello world";
	std::cout << "Data (form s) original state" << std::endl;
	std::cout << "s->data = " << s->data << " | sizeof() = " << sizeof(s->data) << std::endl;
	std::cout << "s->i = " << s->i << " | sizeof() = " << sizeof(s->i) << std::endl;
	std::cout << "s->j = " << s->j << " | sizeof() = " << sizeof(s->j) << std::endl;
	std::cout << "s->s = " << s->s << " | sizeof() = " << sizeof(s->s) << std::endl << std::endl;


	ptr = serialize(s);
	std::cout << "Uintptr_t after serialize()" << std::endl;
	std::cout << "ptr = " << ptr << " | sizeof() = " << sizeof(ptr) << std::endl << std::endl;	


	d = deserialize(ptr);
	std::cout << "Data (from d) after deserialize()" << std::endl;
	std::cout << "s->data = " << d->data << " | sizeof() = " << sizeof(d->data) << std::endl;
	std::cout << "s->i = " << d->i << " | sizeof() = " << sizeof(d->i) << std::endl;
	std::cout << "s->j = " << d->j << " | sizeof() = " << sizeof(d->j) << std::endl;
	std::cout << "s->s = " << d->s << " | sizeof() = " << sizeof(d->s) << std::endl << std::endl;

	delete s;

}
