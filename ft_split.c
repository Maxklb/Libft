/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:46:03 by makoch-l          #+#    #+#             */
/*   Updated: 2023/11/07 16:41:15 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_word_count(char const *s, char c)
{
    int	count;
    int	word;

    count = 0;
    word = 0;
    while (*s)
    {
        if (*s !c && !word)
        {
            count++;
            word = 1;
        }
        else if (*s == c)
            word = 0;
        s++;
    }
    return (count);
}

int	ft_word_lenght(char const *s, char c)
{
    int	i;

    i = 0;
    while (s[i] != c && s[i])
        i++;
    return (i);
}

char	*word_copy(char *src, int i)
{
    char	*dest;
    
    dest = malloc((i + 1) * sizeof(char *));
    if (!dest)
        return (NULL);
    dest[i] = '\0';
    while (i--)
        dest[i] = src[i];
    return (dest);
}

char	**ft_split(char const *s, char c)
{
    
}