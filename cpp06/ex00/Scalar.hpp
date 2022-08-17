/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:12:26 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/17 10:15:22 by mtellal          ###   ########.fr       */
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

	std::string	exception;
	double		value;

	void	display(double var);

	double	extractChar(char *);
	double	extractInt(char *);
	double	extractFloat(char *);
	double	extractDouble(char *);

	void	printChar(double);
	void	printInt(double);
	void	printFloat(double);
	void	printDouble(double);
	void	printException(void);

	bool	isChar(char *);
	bool	isInt(char *);
	bool	isFloat(char *);
	bool	isDouble(char *);
	bool	isException(char *);

	public:

	Scalar(void);
	Scalar(std::string);
	Scalar(const Scalar &);
	~Scalar(void);
	Scalar	&operator=(const Scalar &);

	void	handleConversion(char *);

};

#endif
