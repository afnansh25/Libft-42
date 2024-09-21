/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:17:55 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 13:58:24 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned const char *str;
    unsigned char   letter;
    size_t  i;

    i = 0;
    str = (unsigned const char *)s;
    letter = (unsigned char)c;
    while (i < n && str[i])
    {
        if (str[i] == letter)
            return (char *)(s + i);
        i++;
    }
    if(letter == '\0')
        return (char *)(s + i);
    return (NULL);
}
