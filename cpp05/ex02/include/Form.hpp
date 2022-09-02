/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:35:40 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 11:31:09 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{

	public:
		
		Form(void);
		Form(std::string);
		Form(std::string, unsigned int, unsigned int);
		Form(const Form &);
		~Form(void);
		Form	&operator=(const Form &);

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		unsigned int		getSGrade(void) const;
		unsigned int		getXGrade(void) const;

		void				beSigned(const Bureaucrat &b);

		virtual void		execute(Bureaucrat const &) const = 0;
		void				verifyExecution(Bureaucrat const &) const;

	private:

		const std::string		name;
		bool					isSigned;
		const unsigned int		sGrade;
		const unsigned int		xGrade;

		class	GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class	UnsignedForm : public std::exception
		{
			public:
				const char *what() const throw();
		};

};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif
