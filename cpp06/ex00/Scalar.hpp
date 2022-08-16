/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:12:26 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/16 20:43:48 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <cctype> //isprint
#include <string> // stof, stod
#include <iomanip>
#include <limits.h>
#include <float.h>

#define CHAR 	0
#define INT 	1
#define FLOAT 	2	
#define DOUBLE 	3

class	Scalar
{

	int	initType;
	int	nbBytes;

	public:

	Scalar(void);
	Scalar(std::string);
	Scalar(const Scalar &);
	~Scalar(void);
	Scalar	&operator=(const Scalar &);

	void	handleConversion(char *);

};

std::string	valueToPrint(int);

void	convertChar(char *);
void	convertInt(char *);
void	convertFloat(char *);
void	convertDouble(char *);

bool	isChar(char *s);
bool	isInt(char *);
bool	isFloat(char *);
bool	isDouble(char *);

#endif
