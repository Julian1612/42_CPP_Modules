# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 14:24:06 by jschneid          #+#    #+#              #
#    Updated: 2023/05/16 19:33:47 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler options
NAME     = ex02
CC       = c++
FLAGS    = -Wall -Wextra -Werror -std=c++98

# Source files
SRC      = main.cpp
OBJS     = $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
OBJ_DIR  = ./obj/
RM       = rm -rf

# Colors
BOLD     = \033[1m
RED      = \033[31;1m
GREEN    = \033[32;1m
YELLOW   = \033[33;1m
RESET    = \033[0m

all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

obj/%.o: %.cpp obj
	@$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(FLAGS) -o $(NAME)

clean:
	@echo "$(RED)Cleaning ... $(RESET)"
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
