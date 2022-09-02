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

	public:
	
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string);
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &);

		void    	execute(Bureaucrat const &) const;


	private:

		void	drawShrubbery(void) const;
};

std::ostream	&operator<<(std::ostream &, const ShrubberyCreationForm &);

#endif
