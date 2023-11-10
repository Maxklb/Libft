# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 15:25:48 by makoch-l          #+#    #+#              #
#    Updated: 2023/11/10 19:48:35 by makoch-l         ###   ########.fr        #
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
		ft_memchr \
		ft_memcmp \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strrchr \
		ft_strncmp\
		ft_strnstr \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_itoa.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_calloc.c

CC = gcc
CFLAGS = -Wall -Werror -Wextra 

all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean :
	$(RM) $(OBJS)

fclean :
	$(RM) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all


.PHONY : clean fclean re