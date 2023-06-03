# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschneid <jschneid@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/16 15:45:18 by jschneid          #+#    #+#              #
#    Updated: 2023/06/03 15:51:56 by jschneid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Definitions
NAME		=	ex02
VPATH		=	includes: src:
SRC			=	Fixed.cpp main.cpp
HEADER		=	Fixed.h
OBJ_DIR		=	./obj/
OBJ			=	$(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

# Execution
all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

obj/%.o: %.cpp ./includes
	@$(CXX) $(CXXFLAGS) -I./includes -c $< -o $@

$(NAME): obj $(OBJ)
	@$(CXX) $(OBJ) $(CXXFLAGS) -I./includes -o $(NAME)

clean:
	@$(RM) -rf obj

fclean: clean
	@$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
