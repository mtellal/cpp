/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 10:04:37 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/19 16:58:47 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<class T=int>
class	Array
{
	T	*tab;
	size_t	length;

	void	copyTab(T *, T *, size_t);

	public:

	class	Segfault : public std::exception
	{
		const char *what(void) const throw() 
		{
			return ("Segfault: index invalid");
		}
	};

	Array(void);
	Array(unsigned int);
	Array(const Array &);
	~Array(void);
	Array<T>	&operator=(const Array<T> &);
	Array		&operator=(const T &);
	T		&operator[](size_t i);

	size_t	size(void) const;
	T	*getTab(void) const;
	size_t	getLength(void) const;	

	void	displayTab(void) const;
};

/////////////		CANONIC FORM

template <class T>
Array<T>::Array(void) : length(5)
{
        tab = new T[5];
}

template <class T>
Array<T>::Array(unsigned int n) : length(n)
{
        tab = new T[n];
}

template <class T>
Array<T>::Array(const Array<T> &s)
{
	length = s.getLength();
        tab = new T[s.size()];
        copyTab(s.getTab(), this->tab, s.size());
}

template <class T>
Array<T>::~Array(void)
{
	if (this->tab)
        	delete[] this->tab;
}

/////////////		OPERAOTRS

template <class T>
Array<T>	&Array<T>::operator=(const Array<T> &source)
{
	if (this != &source)
	{
		this->length = source.getLength();
		this->tab = new T[source.size()];
		this->copyTab(source.getTab(), this->tab, source.size());
	}
	return (*this);
}

template <class T>
Array<T>	&Array<T>::operator=(const T &value)
{
	*(this->tab) = value; 
	return (*this);
}

template <class T>
T	&Array<T>::operator[](size_t i)
{
	if (i >= this->length || i < 0)
		throw Array<T>::Segfault(); 
	return (this->tab[i]);
}

/////////////		MEMBERS FUNCTIONS 

template <class T>
void    Array<T>::copyTab(T *src, T *dst, size_t l)
{
        size_t	i;

        i = 0;
	while (i < l)
        {
                dst[i] = src[i];
                i++;
        }
}

template <class T>
size_t  Array<T>::size(void) const
{
        return (this->length);
}

template <class T>
T       *Array<T>::getTab(void) const
{
        return (this->tab);
}

template <class T>
size_t	Array<T>::getLength(void) const
{
	return (this->length);
}

template <class T>
void	Array<T>::displayTab(void) const
{
	unsigned int	i;

	i = 0;
	while (i < this->length)
	{
		std::cout << " | " << this->tab[i];
		i++;
	}
	std::cout << std::endl;
}

#endif
