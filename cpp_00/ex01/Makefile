# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 20:35:49 by jschneid          #+#    #+#              #
#    Updated: 2023/05/31 21:06:37 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definitions
NAME			= ex03
VPATH		=	includes: src:
SRC			=	Contact.cpp PhoneBook.cpp main.cpp
HEADER		=	Contact.hpp PhoneBook.hpp
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
