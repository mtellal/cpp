# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 14:34:37 by mtellal           #+#    #+#              #
#    Updated: 2022/09/06 10:42:21 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++

CFLAGS = -std=c++98 -Wall -Werror -Wextra -g

NAME = base

SRC = main.cpp Base.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(OBJ): $(SRC)
	$(GCC) $(CFLAGS) -c $(SRC) 

$(NAME):$(OBJ)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
