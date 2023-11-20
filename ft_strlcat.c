/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:13:49 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/20 15:50:55 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t	length;

	if (!dst && !dstsize)
		return (0);
	length = ft_strlen(src);
	i = 0;
	while (length + i + 1 < dstsize && src[i])
	{
		dst[length + i] = src[i];
		i++;
	}
	dst[length + i] = '\0';
	if (length <= dstsize)
		return (length + ft_strlen(src));
	return (dstsize + ft_strlen(src));
}
