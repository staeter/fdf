# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: staeter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/05 14:37:36 by staeter           #+#    #+#              #
#    Updated: 2019/03/05 14:37:42 by staeter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = modelib.a



CC = gcc
CFLAGS = -Wall -Wextra -Werror



INCLUDES = ./includes

VERTEX_PATH = vertex/
VERTEX =	apply.o \
			find.o \
			linking.o \
			vertex.o

OBJ =	$(addprefix $(VERTEX_PATH), $(VERTEX))



END_E       = \033[00m
RED_E       = \033[01;31m
GREEN_E     = \033[01;32m
YELLOW_E    = \033[01;33m
PURPLE_E    = \033[01;35m
CYAN_E      = \033[01;36m
WHITE_E     = \033[01;37m
BOLD_E      = \033[1m
UNDERLINE_E = \033[4m



$(NAME):	$(OBJ)
			@ar -rcs $@ $^
			@echo "$(GREEN_E)End compilation $(NAME)$(END_E)"

all:		$(NAME)

%.o:        %.c
			@$(CC) $(CFLAGS) -c -o $@ $< -I$(INCLUDES)

clean:
			@rm -f $(OBJ)
			@echo "$(PURPLE_E)End clean $(NAME)$(END_E)"

fclean:		clean
			@rm -f $(NAME)
			@echo "$(RED_E)end fclean $(NAME)$(END_E)"

re: 		fclean all

.PHONY: clean fclean all re