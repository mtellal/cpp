# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 16:30:18 by mtellal           #+#    #+#              #
#    Updated: 2022/04/08 17:28:58 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = g++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = zombie

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

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
