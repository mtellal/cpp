# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 12:43:24 by mtellal           #+#    #+#              #
#    Updated: 2022/08/17 13:00:18 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = serialize

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(OBJ): $(SRC)
	$(GCC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean 
	rm -rf $(NAME)

re: fclean all
