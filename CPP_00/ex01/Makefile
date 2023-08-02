# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/30 17:35:07 by tlukanie          #+#    #+#              #
#    Updated: 2023/08/02 18:46:45 by tlukanie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	phonebook

SRC =	phonebook.cpp contacts.cpp
HEADER = phonebook.hpp

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