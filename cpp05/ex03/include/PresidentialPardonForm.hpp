/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:48:13 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 15:41:55 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class	PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(const PresidentialPardonForm &);
		~PresidentialPardonForm(void);
		
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &);

		void    execute(Bureaucrat const & executer) const;


	private:

		void	pardon(void) const;

};

std::ostream	&operator<<(std::ostream &, const PresidentialPardonForm &);

#endif
