# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 15:12:39 by mtellal           #+#    #+#              #
#    Updated: 2022/04/08 16:21:53 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = g++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

NAME = account

SRC = tests.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o::%.cpp
	$(GCC) $(CFLAGS) -g -o $@ -c $<

$(NAME): $(OBJ)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
