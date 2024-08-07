/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:23:44 by codespace         #+#    #+#             */
/*   Updated: 2024/08/07 18:31:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p;
    unsigned char fill;

    p = (unsigned char *)s;
    fill = c;
    while (n > 0)
    {
        *p = fill;
        p++;
        n--;
    }
    return (s);
}

// #include <stdio.h>
// int main()
// {
//     char array[24] = "Iam Afnan Farid Shaheen";
//     int i;
    
//     i = 0;
//     ft_memset(array + 4, '-', 5);

//    while( i < 24)
//     {
//         printf("%c ", array[i]);
//         i++;
//     }
//     printf("\n");

//     return 0;
// }


