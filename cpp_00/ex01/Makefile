# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 20:35:49 by jschneid          #+#    #+#              #
#    Updated: 2023/04/19 20:30:21 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compilor options
NAME		=	phonebook
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98

#Source files
VPATH		=	includes: src:
SRC			=	main.cpp Contact.cpp PhoneBook.cpp
HEADER		=	Contact.hpp PhoneBook.hpp
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

obj/%.o: %.cpp obj ./includes
	@$(CC) $(FLAGS) -I./includes -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(FLAGS) -I./includes -o $(NAME)

clean:
	@echo "$(RED)Cleaning ... $(RESET)"
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
