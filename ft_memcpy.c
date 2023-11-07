/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 22:16:35 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/07 16:42:02 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t	i;
    char	*dest2;
    const char	*src2;

    i = 0;
    dest2 = dest;
    src2 = src;
    if (!src || !dest)
		return (NULL);
    while (i < n)
    {
        dest2[i] = src2[i];
        i++;
    }
    return (dest2);
}