# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 16:11:54 by mtellal           #+#    #+#              #
#    Updated: 2022/08/18 16:13:57 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = iter

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = iter.hpp

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
