/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:28:13 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/09 15:17:55 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *memoryblock, int searchedchar, size_t size)
{
	size_t			i;
	unsigned char	*new_memoryblock;

	i = 0;
	new_memoryblock = (unsigned char *) memoryblock;
	while (i < size)
	{
		if (new_memoryblock[i] == (unsigned char) searchedchar)
			return (new_memoryblock + i);
		i++;
	}
	return (0);
}

int main()
{
	char s1[] = "test";
	char s2[] = "es";

	ft_memchr(s1, s2, 5);
}