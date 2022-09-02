/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:22:06 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/09 15:41:31 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cmath>

class	RobotomyRequestForm : public Form
{
	public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(const RobotomyRequestForm &);
	~RobotomyRequestForm(void);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &);

	void    execute(Bureaucrat const & executer) const;

	private:

		void	drill(void) const;

};

std::ostream	&operator<<(std::ostream &, const RobotomyRequestForm &);

#endif
