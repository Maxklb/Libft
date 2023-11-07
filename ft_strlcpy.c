/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:41:45 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/07 16:40:22 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    int	i;
    size_t	len;

    i = 0;
    len = ft_strlen(src);
    if (!dst || !src)
        return (0);
    while (dstsize > (i + 1) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    if (dstsize > i)
        dst[i] = '\0';
    return (len);
}