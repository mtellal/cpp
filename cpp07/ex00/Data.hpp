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

                Data(void);
                Data(int);
                Data(const Data &);
                ~Data(void);

                Data    &operator=(const Data &);
		bool    operator>(const Data &o);

                int     getAttribute(void) const;
        
        
        private:
                
                int     i;
};

std::ostream    &operator<<(std::ostream &, const Data &);

#endif
