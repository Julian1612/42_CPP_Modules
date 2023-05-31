# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 12:37:22 by jschneid          #+#    #+#              #
#    Updated: 2023/05/31 20:50:34 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definitions
NAME    = ex05
SRC     = Harl.cpp main.cpp
HEADER  = Harl.h
OBJ_DIR = ./obj/
OBJ     = $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98

# Execution
all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

obj/%.o: %.cpp obj $(HEADER)
	@$(CC) $(CFLAGS) -I./$(HEADER) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@$(RM) -rf obj

fclean: clean
	@$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
