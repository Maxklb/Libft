/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:45:00 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/13 13:44:25 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t	i;
	int		diff;

	i = 0;
	diff = 0;
	if (length == 0)
		return (0);
	while (first[i] && second[i] && i < length)
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
	}
	if (!diff && i < length)
		diff = first[i] - second[i];
	return (diff);
}

/*int main() 
{
	char s1[] = "test";
	char s2[] = "testt";
	
	if (ft_strncmp(s1, s2, 4) < 0) 
		printf("'%s' is lower than '%s'. \n", s1, s2);
	if (ft_strncmp(s1, s2, 4) == 0)
		printf("'%s' is equal to '%s'. \n", s1, s2);
	if (ft_strncmp(s1, s2, 4) > 0) 
		printf("'%s' is superior than '%s'. \n", s1, s2);
	if (strncmp(s1, s2, 4) < 0) 
		printf("'%s' is lower than '%s'. \n", s1, s2);
	if (strncmp(s1, s2, 4) == 0)
		printf("'%s' is equal to '%s'. \n", s1, s2);
	if (strncmp(s1, s2, 4) > 0) 
		printf("'%s' is superior than '%s'. \n", s1, s2);
}
*/