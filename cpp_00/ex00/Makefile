# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 19:33:49 by jschneid          #+#    #+#              #
#    Updated: 2023/05/31 21:16:45 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilor options
NAME		=	ex00
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98

#Source files
SRC			=	megaphone.cpp
OBJS		=	$(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
OBJ_DIR		=	./obj/

#Colors
RM			=	rm -rf
BOLD		=	\033[1m
RED			=	\033[31;1m
GREEN		=	\033[32;1m
YELLOW		=	\033[33;1m
RESET		=	\033[0m

all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

obj/%.o: %.cpp obj
	@$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
