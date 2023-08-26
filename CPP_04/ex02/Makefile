# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlukanie <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 14:24:57 by tlukanie          #+#    #+#              #
#    Updated: 2023/08/26 19:00:13 by tlukanie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	abstractClass

SRC =	main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

HEADER = AAnimal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp

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