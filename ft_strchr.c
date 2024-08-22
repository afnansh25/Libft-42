/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:18:47 by codespace         #+#    #+#             */
/*   Updated: 2024/08/22 13:43:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t  i;
    unsigned const char *str;
    unsigned char   letter;

    i = 0;
    str = (unsigned const char *)s;
    letter = (unsigned char)c;
    while (str[i])
    {
        if (str[i] == letter)
            return (char *)(s + i);
        i++;
    }
    if (letter == '\0')
        return (char *)(s + i);
    return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     // Test cases
//     char *s = "Hello, World!";
    
//     // Test 1: Character is present in the string
//     char *result = ft_strchr(s, 'W');
//     printf("Test 1: %s\n", result);  // Expected output: "World!"
    
//     // Test 2: Character is not present in the string
//     result = ft_strchr(s, 'z');
//     printf("Test 2: %p\n", result);  // Expected output: (nil) or NULL
    
//     // Test 3: Search for the null terminator
//     result = ft_strchr(s, '\0');
//     printf("Test 3: %p\n", result);  // Expected output: pointer to end of string
    
//     return 0;
// }