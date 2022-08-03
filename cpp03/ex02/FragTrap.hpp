/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:12:18 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 17:37:14 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap &);
		FragTrap(std::string);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap &);

		void	highFiveGuys(void);
};

#endif
