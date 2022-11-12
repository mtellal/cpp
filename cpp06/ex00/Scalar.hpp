/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:12:26 by mtellal           #+#    #+#             */
/*   Updated: 2022/09/08 09:17:18 by mtellal          ###   ########.fr       */
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
#include <cstdlib>

class	Scalar
{

	public:

		Scalar(void);
		Scalar(std::string);
		Scalar(const Scalar &);
		~Scalar(void);
		Scalar	&operator=(const Scalar &);

		void	handleConversion(std::string);


	private:

		std::string exception;

		bool	isChar(std::string);
		bool	isInt(std::string);
		bool	isFloat(std::string);
		bool	isDouble(std::string);
		bool	isException(std::string);

		double	extractChar(std::string);
		double	extractInt(std::string);
		double	extractFloat(std::string);
		double	extractDouble(std::string);

		void	printChar(double);
		void	printInt(double);
		void	printFloat(double);
		void	printDouble(double);
		void	printException(void);

		void	display(double var);

};

#endif
