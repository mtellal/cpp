# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/07 10:56:25 by mtellal           #+#    #+#              #
#    Updated: 2022/08/09 11:28:40 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = exception

SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp
	$(GCC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(GCC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
