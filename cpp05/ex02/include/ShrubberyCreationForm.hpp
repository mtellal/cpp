/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 14:55:50 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 15:21:06 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include <fstream>
#include "Form.hpp"

class	ShrubberyCreationForm: public Form
{
		void		drawShrubbery(void) const;

	public:
	
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &);

		std::string	getTarget(void) const;
		void    execute(Bureaucrat const & executer) const;
};

std::ostream	&operator<<(std::ostream &, const ShrubberyCreationForm &);

#endif
