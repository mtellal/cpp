# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/13 15:26:33 by mtellal           #+#    #+#              #
#    Updated: 2022/09/13 15:29:17 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

FLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = span

SRC = main.cpp Span.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Span.hpp

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
