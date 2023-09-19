/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makoch-l <makoch-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:05:33 by makoch-l          #+#    #+#             */
/*   Updated: 2023/09/19 10:57:27 by makoch-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isupper(int c)
{
    if (c >= 'A' || c <= 'Z')
        return (1);
    return (0);
}

int ft_islower(int c)
{
    if (c >= 'a' || c <= 'z')
        return (1);
    return (0);
}

int ft_isalpha(int  c)
{
    return (ft_isupper(c) || ft_islower(c));
}