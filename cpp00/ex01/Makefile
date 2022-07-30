# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 16:15:59 by mtellal           #+#    #+#              #
#    Updated: 2022/07/20 16:19:05 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = phonebook 

INCLUDE = include/

SRC = main.cpp $(addprefix src/, Contact.cpp PhoneBook.cpp utils.cpp)

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o:%.cpp
	$(GCC) -I $(INCLUDE) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(GCC) $(CFLAGS) -o $(NAME) $(OBJ) 

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
