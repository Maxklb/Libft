/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:15:56 by makoch-l          #+#    #+#             */
/*   Updated: 2023/09/19 10:53:59 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int ft_atoi(char *str)
int ft_isalnum(int c)
int ft_isalpha(int  c)
int ft_isascii(int c)
int ft_isdigit(int c)
int ft_isprint(int c)
int ft_strlen(char *str)
void    ft_putchar_fd(char c, int fd)
void    ft_putstr_fd(char *s, int fd)
void    *ft_memset(void *s, int c, size_t n)

#endif