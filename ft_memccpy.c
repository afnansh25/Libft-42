/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 17:31:08 by codespace         #+#    #+#             */
/*   Updated: 2024/08/07 18:07:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned const char *s;
    unsigned char   *d;
    unsigned char    stop;
    size_t  i;

    s = (unsigned const char *)src;
    d = (unsigned char *)dest;
    stop = (unsigned char)c;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        if (s[i] == stop)
        {
            return (void *)(d + i + 1);
        }
        i++;
    }
    return (NULL);
}

// #include <stdio.h>
// int main()
// {
//     char src[30] = "iam afnan shaheen";
//     char dest[30];
//     int c = 'n';
//     size_t n = 10;

//     ft_memccpy(dest, src, c, n);
//     printf("%s", dest);

//     return (0);
// }