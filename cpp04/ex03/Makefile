# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/18 17:23:06 by mtellal           #+#    #+#              #
#    Updated: 2022/04/18 17:25:36 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = g++

CFLAGS =-std=c++98 -Wall -Wextra -Werror

NAME = materia

SRC = main.cpp AMateria.cpp 

OBJ = $(SRC:.cpp-.o)

all: $(NAME)

%.o:%.cpp
	$(GCC) $(CFRLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
