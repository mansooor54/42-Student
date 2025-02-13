# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/06 11:38:54 by malmarzo          #+#    #+#              #
#    Updated: 2025/02/06 14:17:24 by malmarzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a
SRC     = ft_printf.c \ ft_printf_utility.c
OBJ     = $(SRC:.c=.o)

CC      = cc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f
AR      = ar rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

