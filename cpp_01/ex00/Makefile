# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 10:53:20 by jschneid          #+#    #+#              #
#    Updated: 2023/05/31 20:54:07 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definitions
NAME    = ex00
SRC     = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
HEADER  = Zombie.h
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

$(NAME): obj $(OBJ)
	@$(CC) $(OBJ) $(CFLAGS) -o $@

clean:
	@$(RM) -rf $(OBJ_DIR)

fclean: clean
	@$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
