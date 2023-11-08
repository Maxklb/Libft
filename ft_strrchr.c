/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:25:10 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/08 15:43:36 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedchar)
{
	char			*str;
	char			*last_char;
	unsigned char	char_searchedchar;

	str = (char *) string;
	last_char = (void *) 0;
	char_searchedchar = (unsigned char *) searchedchar;
	while (*str)
	{
		if (*str == char char_searchedchar)
			last_char = str;
		str++;
	}
	if (*str == char char_searchedchar)
		last_char = str;
	return (last_char);
}
