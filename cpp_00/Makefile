# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 10:53:20 by jschneid          #+#    #+#              #
#    Updated: 2023/04/18 15:09:44 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilor options
NAME		=	ex00
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98

#Source files
SRC			=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HEADER		=	Zombie.h
OBJS		=	$(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
OBJ_DIR		=	./obj/

#Colors
RM			=	rm -f
BOLD		=	\033[1m
RED			=	\033[31;1m
GREEN		=	\033[32;1m
YELLOW		=	\033[33;1m
RESET		=	\033[0m

all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

obj/%.o: %.cpp obj $(HEADER)
	@$(CC) $(FLAGS) -I$(HEADER) -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
	@echo "$(RED)Cleaning ... $(RESET)"
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
