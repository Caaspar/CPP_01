# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgerner <cgerner@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/11 15:37:43 by cgerner           #+#    #+#              #
#    Updated: 2025/07/16 13:57:28 by cgerner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SedIsForLosers

SRCS = Main.cpp 

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

MY_OBJECTS = $(SRCS:.cpp=.o)

GREEN = \033[1;32m
PINK = \033[1;35m
RED = \033[1;31m
RESET = \033[0m

.cpp.o:
	@echo "$(PINK)Compiling... 💭​​$(RESET) $(GREEN)$<$(RESET)"
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(MY_OBJECTS)
	@echo "$(PINK)Linked ✅​🥇​​$(RESET) $(GREEN)$(NAME)$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(MY_OBJECTS)

all: $(NAME)

clean:
	@echo "$(RED)Cleaning object files... 🚸​​$(RESET)"
	@rm -f $(MY_OBJECTS)

fclean: clean
	@echo "$(RED)Removing executable... 🚸​​$(RESET)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re