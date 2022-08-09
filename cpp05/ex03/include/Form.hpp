/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:35:40 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 16:45:11 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class	Form
{
	const std::string	name;
	bool			isSigned;
	const int		sGrade;
	const int		xGrade;

	protected:

	class	GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Grade to high");
			}
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Grade too low");
			}
	};

	class	GradeUnsignedException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("form not signed");
			}
	};

	std::string		target;

	public:
		Form(void);
		Form(std::string);
		Form(std::string, const int, const int);
		Form(const Form &);
		~Form(void);
		Form	&operator=(const Form &);

		const std::string	getName(void) const;
		bool			getSigned(void) const;
		int			getSGrade(void) const;
		int			getXGrade(void) const;
		std::string		getTarget(void) const;

		void	beSigned(const Bureaucrat &b);
		virtual void	execute(Bureaucrat const & executer) const = 0;

		void	verifyGrade(Bureaucrat const &) const;
		bool	verifyExecution(Bureaucrat const &) const;
};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif
