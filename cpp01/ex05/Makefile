# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 15:37:14 by mtellal           #+#    #+#              #
#    Updated: 2022/04/12 15:40:02 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = g++ 

CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

NAME = harl

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
