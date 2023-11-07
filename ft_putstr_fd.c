/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:32:24 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/07 16:41:24 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (str && str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}