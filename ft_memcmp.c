/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:29:32 by codespace         #+#    #+#             */
/*   Updated: 2024/08/22 14:40:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned const char *str1;
    unsigned const char *str2;
    size_t  i;
    
    str1 = (unsigned const char *)s1;
    str2 = (unsigned const char *)s2;
    i = 0;

    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // Test cases
//     char buffer1[5] = {'a', 'b', 'c', 'd', 'e'};
//     char buffer2[5] = {'a', 'b', 'c', 'f', 'g'};
    
//     // Test 1: Memory blocks differ
//     int result = ft_memcmp(buffer1, buffer2, 5);
//     printf("Test 1: %d\n", result);  // Expected: < 0 (because 'd' < 'f')
    
//     // Test 2: Memory blocks are identical
//     result = ft_memcmp(buffer1, buffer1, 5);
//     printf("Test 2: %d\n", result);  // Expected: 0
    
//     // Test 3: Memory blocks differ in the first few bytes
//     char buffer3[5] = {'a', 'b', 'c', 'd', 'f'};
//     result = ft_memcmp(buffer1, buffer3, 4);
//     printf("Test 3: %d\n", result);  // Expected: 0 (only first 4 bytes compared)
    
//     return 0;
// }
