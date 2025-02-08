# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: onkeltag <onkeltag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/07 17:21:17 by jcheron           #+#    #+#              #
#    Updated: 2025/02/08 20:29:53 by onkeltag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -Iincludes -std=c++98
SRC_DIR = src
OBJ_DIR = obj

SRC = $(SRC_DIR)/main.c $(SRC_DIR)/Weapon.cpp $(SRC_DIR)/HumanA.cpp $(SRC_DIR)/HumanB.cpp
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/Weapon.o $(OBJ_DIR)/HumanA.o $(OBJ_DIR)/HumanB.o

NAME = unnecessary_violence

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
