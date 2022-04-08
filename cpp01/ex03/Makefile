# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 20:23:40 by mtellal           #+#    #+#              #
#    Updated: 2022/04/08 20:26:46 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = g++

CFLAGS = -std=c++98

NAME = violence

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp
	$(GCC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
