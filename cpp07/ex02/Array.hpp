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
#include <cmath>

template<class T=int>
class	Array
{

	public:

		class	Segfault : public std::exception
		{
			public:
				const char *what(void) const throw();
		};

		Array(void);
		Array(unsigned int);
		Array(const Array<T> &);
		~Array(void);

		Array<T>	&operator=(const Array<T> &);
		T			&operator[](size_t i);

		size_t		size(void) const;
		T			*getTab(void) const;

		void		displayTab(void) const;

	private:

		T		*tab;
		size_t	length;

		void	copyTab(T *, size_t);
		void	initTab(void);

};

/////////////		CANONIC FORM

template <class T>
Array<T>::Array(void) : length(0)
{
    tab = NULL;
}

template <class T>
Array<T>::Array(unsigned int n) : length(n)
{
    tab = new T[n];
	initTab();
}

template <class T>
Array<T>::Array(const Array<T> &s)
{
	length = s.size();
    tab = new T[s.size()];
    copyTab(s.getTab(), s.size());
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
		this->length = source.size();
		if (this->tab)
			delete [] this->tab;
		this->tab = new T[source.size()];
		this->copyTab(source.getTab(), source.size());
	}
	return (*this);
}

template <class T>
T	&Array<T>::operator[](size_t i)
{
	if (!this->tab || i >= this->length || i < 0)
		throw Array<T>::Segfault(); 
	return (this->tab[i]);
}

/////////////		MEMBERS FUNCTIONS 

template <>
void    Array<char>::initTab(void)
{
	size_t	i;

	i = 0;
	while (this->tab && i < this->length)
    {
    	this->tab[i] = '0';
    	i++;
    }
}

template <>
void    Array<std::string>::initTab(void)
{
	size_t	i;

	i = 0;
	while (this->tab && i < this->length)
    {
    	this->tab[i] = "0";
    	i++;
    }
}

template <class T>
void    Array<T>::initTab(void)
{
	size_t	i;

	i = 0;
	while (this->tab && i < this->length)
    {
    	this->tab[i] = 0;
    	i++;
    }
}

template <class T>
void    Array<T>::copyTab(T *src, size_t l)
{
    size_t	i;

    i = 0;
	while (src && this->tab && i < l)
    {
    	this->tab[i] = src[i];
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
void	Array<T>::displayTab(void) const
{
	unsigned int	i;

	i = 0;
	while (this->tab && i < this->length)
	{
		
		std::cout << "[" << this->tab[i] << "] ";
		i++;
	}
	std::cout << std::endl;
}

template <class T>
const char *Array<T>::Segfault::what(void) const throw() 
{
		return ("Segfault: index invalid");
}

#endif
