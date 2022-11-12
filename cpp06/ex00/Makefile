# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/09 18:11:29 by mtellal           #+#    #+#              #
#    Updated: 2022/09/08 09:16:58 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = convert

SRC = main.cpp Scalar.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(OBJ): $(SRC)
	$(GCC) $(FLAGS) -c $(SRC) 

$(NAME): $(OBJ)
	$(GCC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

