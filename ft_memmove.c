/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:07:31 by codespace         #+#    #+#             */
/*   Updated: 2024/08/07 18:31:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned const char   *s;
    unsigned char   *d;
    size_t    i;
    
    s = (unsigned const char *)src;
    d = (unsigned char *)dest;
    i = 0;
    if (d == s || n == 0)
    {
        return (dest);
    }
    if (d < s)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    } 
    else
    {
        i = n;
        while (i > 0)
        {
            d[i-1] = s[i-1];
            i--;
        }
    }
    return (dest);
}

// #include <stdio.h>
// int main()
// {
//     char src[30] = "Iam Afnan Shaheen";
//     char dest[30] = "Farid";
//     size_t n = 5;

//     ft_memmove(dest, src, n);
//     printf("%s\n", dest);
  
//     return (0);
// }
