/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:15:56 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/20 11:02:47 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_lower(int c);
int		ft_strlen(char *str);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
int		ft_strncmp(const char *first, const char *second, size_t length);
void	bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *memoryblock, int searchedchar, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strchr(const char *string, int searchedChar);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t length);
char	*ft_strrchr(const char *string, int searchedchar);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif