/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:47:56 by mtellal           #+#    #+#             */
/*   Updated: 2022/09/06 16:49:12 by mtellal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <iostream>
#include <cstdlib>
#include <string>

typedef struct data_s
{
	int			data;
	int			i;
	int			j;
	std::string	s;
}		Data;

#endif
