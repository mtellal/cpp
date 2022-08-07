/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:35:40 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/07 18:09:12 by mtellal          ###   ########.fr       */
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

	public:
		Form(void);
		Form(std::string);
		Form(const Form &);
		~Form(void);
		Form	&operator=(const Form &);

		const std::string	getName(void) const;
		bool			getSigned(void) const;
		const int		getSGrade(void) const;
		const int		getXGrade(void) const;

		void	beSigned(Bureaucrat &b);

};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif
