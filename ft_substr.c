/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:56:16 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/29 15:01:28 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *source, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!source || (start >= ft_strlen(source)))
		return (NULL);
	if (len > ft_strlen(source) - start)
		len = ft_strlen(source) - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len && source[start + i])
	{
		dest[i] = source[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
