# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malmarzo <malmarzo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/21 11:26:40 by malmarzo          #+#    #+#              #
#    Updated: 2024/12/30 23:45:43 by malmarzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
       ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
       ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
       ft_calloc.c ft_strdup.c ft_toupper.c ft_tolower.c \
       ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
       ft_strnstr.c ft_atoi.c ft_strrchr.c ft_substr.c \
       ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
       ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = ${SRCS:%.c=%.o}
NAME = libft.a
LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

# Rule to convert .c to .o
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

# Rule to create the library
${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

# Default target
all: ${NAME}

# Cleaning object files
clean:
	${RM} ${OBJS}

# Full clean
fclean: clean
	${RM} ${NAME}

# Rebuild
re: fclean all

.PHONY: all bonus clean fclean re
