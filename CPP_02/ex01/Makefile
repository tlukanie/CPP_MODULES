# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 17:43:36 by tlukanie          #+#    #+#              #
#    Updated: 2023/08/21 17:43:38 by tlukanie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Fixed

SRC =	main.cpp Fixed.cpp

HEADER = Fixed.hpp

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