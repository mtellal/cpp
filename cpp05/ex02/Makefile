# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtellal <mtellal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/07 10:56:25 by mtellal           #+#    #+#              #
#    Updated: 2022/08/09 14:50:36 by mtellal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror -g

NAME = exception

SRC = main.cpp $(addprefix src/, Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
      PresidentialPardonForm.cpp)

OBJ = $(SRC:.cpp=.o)

HEADER = -I include

all: $(NAME)

%.o:%.cpp
	$(GCC) $(FLAGS) $(HEADER)  -o $@ -c $< 

$(NAME): $(OBJ)
	$(GCC) $(FLAGS) $(HEADER) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
