# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 15:18:49 by mtellal           #+#    #+#              #
#    Updated: 2022/09/14 15:27:55 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

FLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = mutantstack

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = MutantStack.hpp

all: $(NAME)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $(SRC)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
