/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:07:49 by codespace         #+#    #+#             */
/*   Updated: 2024/08/07 18:31:49 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned const char   *s;
    unsigned char   *d;
    size_t    i;
    
    s = (unsigned const char *)src;
    d = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

// #include <stdio.h>
// int main()
// {
//     char src[30] = "Iam Afnan Shaheen";
//     char dest[30] = "Farid";
//     size_t n = 5;

//     ft_memcpy(dest, src, n);
//     printf("%s", dest);
  
//     return (0);
// }