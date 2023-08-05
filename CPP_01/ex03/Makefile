# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/05 13:11:53 by tlukanie          #+#    #+#              #
#    Updated: 2023/08/05 18:38:30 by tlukanie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Unnecessary_violence

SRC =	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

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