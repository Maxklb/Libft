/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:37:55 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/20 15:04:37 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t elementcount, size_t elementsize)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	if (elementcount > 18446744073709551615UL / elementsize)
		return (NULL);
	ptr = (void *) malloc (elementcount * elementsize);
	if (!ptr)
		return (NULL);
	if (i < elementcount * elementcount)
	{
		ptr[i] = (unsigned char) 0;
		i++;
	}
	return ((void *) ptr);
}