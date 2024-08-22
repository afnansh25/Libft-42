/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:19:20 by codespace         #+#    #+#             */
/*   Updated: 2024/08/22 14:12:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t  i;
    unsigned const char   *str;
    unsigned char  letter;
    const char   *last;
    
    i = 0;
    str = (unsigned const char *)s;
    letter = (unsigned char)c;
    last = NULL;
    while (str[i])
    {
        if(str[i] == letter)
           last = (char *)(s + i);
        i++;
    }
    if (letter == '\0')
        return (char *)(s + i);
    return (char *)(last);
}

// #include <stdio.h>

// int main()
// {
//     // Test cases
//     char *s = "Hello, World!";
    
//     // Test 1: Character is present in the string
//     char *result = ft_strrchr(s, 'o');
//     printf("Test 1: %s\n", result);  // Expected output: "World!"
    
//     // Test 2: Character is not present in the string
//     result = ft_strrchr(s, 'z');
//     printf("Test 2: %p\n", result);  // Expected output: (nil) or NULL
    
//     // Test 3: Search for the null terminator
//     result = ft_strrchr(s, '\0');
//     printf("Test 3: %p\n", result);  // Expected output: pointer to end of string
    
//     return 0;
// }