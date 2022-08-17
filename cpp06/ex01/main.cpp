/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:50:53 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/17 14:39:52 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

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
	std::cout << "Data (form s) original state" << std::endl;
	std::cout << "s->data = " << s->data << std::endl;
	std::cout << "pointer = " << s << std::endl;
	std::cout << "address = " << &s << std::endl << std::endl;

	ptr = serialize(s);
	std::cout << "Uintptr_t after serialize()" << std::endl;
	std::cout << "ptr = " << ptr << std::endl;	

	d = deserialize(ptr);
	std::cout << "Data (from d) after deserialize()" << std::endl;
	std::cout << "d->data = " << d->data << std::endl;
	std::cout << "pointer = " << d << std::endl;
	std::cout << "address = " << &d << std::endl << std::endl;

}
