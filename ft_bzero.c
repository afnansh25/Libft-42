/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:52:50 by codespace         #+#    #+#             */
/*   Updated: 2024/08/04 11:09:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *p;
    
    p = (unsigned char *)s;
    while (n > 0)
    {
        *p = '\0';
        p++;
        n--;
    }
}

// #include <stdio.h>
// //#include <string.h>
// int main(void)
// {
//     char array[24] = "Iam Afnan Farid Shaheen";
//     int i = 0;
    
//     ft_bzero(array + 4, 5);
//     //bzero(array + 4, 5);
//     while (i < 24)
//     {
//         printf("%c", array[i]);
//         i++;
//     }
//     printf("\n");
//     return (0);
// }