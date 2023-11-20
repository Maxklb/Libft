/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:56:16 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/20 17:36:35 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *source, unsigned int start, size_t length)
{
	char	*dest;
	int		i;
	
	if (!source)
		return (NULL);
	if (length < ft_strlen(source))
		dest = malloc(sizeof(char) * (ft_strlen(source) + 1));
	else
		dest = malloc(sizeof(char) * (length + 1));
	if (!dest)
		return (NULL);
}