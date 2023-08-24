# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 18:55:09 by tlukanie          #+#    #+#              #
#    Updated: 2023/08/24 14:12:21 by tlukanie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	scavTrap

SRC =	main.cpp ClapTrap.cpp ScavTrap.cpp

HEADER = ClapTrap.hpp ScavTrap.hpp

CC =	c++

FLAGS =	-Wall -Wextra -Werror -std=c++98 -g 

RM		= rm -rf

all: $(NAME)

$(NAME):	$(SRC) $(HEADER)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@$(RM) $(NAME)

fclean:
	@$(RM) $(NAME)

re: clean all fclean

.PHONY: all clean fclean re