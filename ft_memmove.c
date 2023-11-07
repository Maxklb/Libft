/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:33:37 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/07 16:41:52 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t	i;
    char	*dest2;
    const char	*src2;

    i = 0;
    
    if (!src || !dest)
        return (NULL);
    if (src2 < dest2)
    {
        while (n)
        {
            dest2[n - 1] = src2[n - 1];
            n--;
        }
    }
    else
    {
        while (i < n)
        {
            dest2[i] = src2[i];
            i++;
        }
    }
    return (dest2);
}