# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 15:25:48 by makoch-l          #+#    #+#              #
#    Updated: 2023/11/22 00:52:30 by makoch-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCS :=  ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c\
		ft_strnstr.c \
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

OBJS = $(SRCS:.c=.o) 

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re