/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:12:18 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/03 17:37:14 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	public:

		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &);
		DiamondTrap(std::string);
		~DiamondTrap(void);
		DiamondTrap &operator=(const DiamondTrap &);

        void    whoAmi(void);

    private:

        std::string name;

};

#endif