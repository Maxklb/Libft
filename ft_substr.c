/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:56:16 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/23 16:28:28 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *source, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (!source)
		return (NULL);
	if (len < ft_strlen(source))
		dest = malloc(sizeof(char) * (ft_strlen(source) + 1));
	else
		dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	if (start < ft_strlen(source))
	{
		while (source[start + i] && i < len)
		{
			dest[i] = source[start + i];
			i++;
		}
		dest[i] = 0;
	}
	else
		dest[0] = 0;
	return (dest);
}
