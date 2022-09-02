/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:29:21 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/07 15:50:09 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class	Bureaucrat
{
	public:

	Bureaucrat(void);
	Bureaucrat(std::string);
	Bureaucrat(std::string, unsigned int);
	Bureaucrat(const Bureaucrat &);
	~Bureaucrat(void);

	Bureaucrat	&operator=(const Bureaucrat &);

	std::string	getName(void) const;
	int			getGrade(void) const;

	void		incrementGrade(void);
	void		decrementGrade(void);

	void		signForm(Form &) const;


	private:

		const std::string	name;
		int					grade;

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
};

std::ostream	&operator<<(std::ostream &, const Bureaucrat &);

#endif
