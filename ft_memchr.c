/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:17:55 by codespace         #+#    #+#             */
/*   Updated: 2024/08/22 14:26:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
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

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // Test cases
//     char buffer[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    
//     // Test 1: Byte is present in the memory block
//     char *result = ft_memchr(buffer, 'd', 10);
//     printf("Found 'd': %s\n", result);  // Expected: "defghij" (depends on the content after 'd')
    
//     // Test 2: Byte is not present
//     result = ft_memchr(buffer, 'z', 10);
//     printf("Not found 'z': %p\n", result);  // Expected: (nil) or NULL
    
//     // Test 3: Search for a null terminator in a memory block
//     buffer[3] = '\0';
//     result = ft_memchr(buffer, '\0', 10);
//     printf("Null terminator: %p\n", result);  // Expected: pointer to the null terminator
    
//     return 0;
// }
