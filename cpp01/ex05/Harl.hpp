/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:40:40 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/27 12:45:27 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

class Harl
{
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);	

	public:
		
	Harl(void);
	Harl(const Harl &);
	~Harl(void);
	Harl	&operator=(const Harl &);

	void	complain(std::string level);
};

#endif
