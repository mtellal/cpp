/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 15:44:04 by mtellal           #+#    #+#             */
/*   Updated: 2022/08/18 15:52:54 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class   Data
{
        public:
                int     i;

                Data(int x);
                Data(void);
                Data(const Data &o);
                ~Data(void);
                Data    &operator=(const Data &);
		bool    operator>(const Data &o);
};

std::ostream    &operator<<(std::ostream &, const Data &);

#endif
