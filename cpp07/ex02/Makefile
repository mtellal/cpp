# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 09:53:45 by mtellal           #+#    #+#              #
#    Updated: 2022/08/19 11:15:48 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = Array

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

HEADER = Array.hpp

all: $(NAME)

$(OBJ): $(SRC) $(HEADER)
	$(GCC) $(CFLAGS) -c $(SRC)

$(NAME): $(OBJ)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all 
