# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 13:19:10 by tlukanie          #+#    #+#              #
#    Updated: 2023/08/24 14:12:11 by tlukanie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	fragTrap

SRC =	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

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