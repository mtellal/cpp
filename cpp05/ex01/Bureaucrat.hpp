/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:29:21 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/07 18:06:11 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat
{
	std::string	name;
	int		grade;

	class	GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Grade toot high");
			}
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Garde too low");
			}
	};

	public:

	Bureaucrat(void);
	Bureaucrat(std::string);
	Bureaucrat(const Bureaucrat &);
	~Bureaucrat(void);

	Bureaucrat	&operator=(const Bureaucrat &);

	std::string	getName(void) const;
	int		getGrade(void) const;

	void		incrementGrade(void);
	void		decrementGrade(void);

	void		signForm(int, std::string, std::string) const;

};

std::ostream	&operator<<(std::ostream &, const Bureaucrat &);

#endif
