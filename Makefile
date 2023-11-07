# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 15:25:48 by makoch-l          #+#    #+#              #
#    Updated: 2023/11/07 16:11:31 by makoch-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_toupper.c \

CC = gcc
CFLAGS = -Wall -Werror -Wextra 

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)


.PHONY : clean fclean re