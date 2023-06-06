# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 09:56:06 by jschneid          #+#    #+#              #
#    Updated: 2023/06/06 10:46:48 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definitions
NAME	=	ex01
VPATH	=	includes: src:
SRC		=	ClapTrap.cpp ScavTrap.cpp main.cpp
HEADER	=	ClapTrap.h ScavTrap.h
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
