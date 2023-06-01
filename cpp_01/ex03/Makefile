# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 14:32:34 by jschneid          #+#    #+#              #
#    Updated: 2023/06/01 15:50:02 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definitions
NAME			= ex03
VPATH			= include:
SRC				= HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
HEADER			= HumanA.h HumanB.h Weapon.h
OBJ_DIR			= ./obj/
OBJ				= $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
CC				= c++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

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
