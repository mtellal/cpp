# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 14:38:08 by mtellal           #+#    #+#              #
#    Updated: 2022/08/18 15:48:51 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = whatever

SRC = main.cpp Data.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = Data.hpp

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

