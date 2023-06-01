# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 10:53:20 by jschneid          #+#    #+#              #
#    Updated: 2023/06/01 10:03:30 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definitions
NAME	=	ex00
VPATH	=	includes: src:
SRC		=	Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
HEADER	=	Zombie.hpp
OBJ_DIR	=	./obj/
OBJ		=	$(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

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
