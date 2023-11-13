/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:15:56 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/13 13:57:15 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#ifndef LIBFT_H
# define LIBFT_H

int ft_atoi(char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_lower(int c);
int ft_strlen(char *str);
void bzero(void *s, size_t n);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void *ft_memset(void *s, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memchr(const void *memoryblock, int searchedchar, size_t size);
int ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
char *ft_strchr(const char *string, int searchedChar);
char **ft_split(char const *s, char c);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int	ft_strncmp(const char *first, const char *second, size_t length);
char *ft_strnstr(const char *haystack, const char *needle, size_t length);
char	*ft_strrchr(const char *string, int searchedchar);

#endif