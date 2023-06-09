# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 15:57:29 by jschneid          #+#    #+#              #
#    Updated: 2023/06/08 23:12:25 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definitions
NAME	=	ex01
VPATH	=	includes: src:
SRC		=	Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp\
			WrongCat.cpp Brain.cpp main.cpp
HEADER	=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp\
			WrongCat.hpp Brain.hpp`
OBJ_DIR	=	./obj/
OBJ		=	$(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
# -fsanitize=address,undefined -g

# Execution
all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

obj/%.o: %.cpp ./includes
	@$(CC) $(CFLAGS) -I./includes -c $< -o $@

$(NAME): obj $(OBJ)
	@$(CC) $(OBJ) $(CFLAGS) -I./includes -o $(NAME)

clean:
	@$(RM) -rf obj

fclean: clean
	@$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
