/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:18:47 by codespace         #+#    #+#             */
/*   Updated: 2024/08/21 17:39:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strchr(const char *s, int c)
{
    //size_t  i;
    //unsigned const char *str;
    unsigned char   letter;

    //i = 0;
    //str = (unsigned const char *)s;
    letter = (unsigned char)c;
    while (*s)
    {
        if (*s == letter)
            return (char *)s;
        //i++;
    }
    if (letter == '\0')
        return (char *)s;
    return (NULL);
}

#include <stdio.h>

int main()
{
    // Test cases
    char *s = "Hello, World!";
    
    // Test 1: Character is present in the string
    char *result = ft_strchr(s, 'W');
    printf("Test 1: %s\n", result);  // Expected output: "World!"
    
    // Test 2: Character is not present in the string
    result = ft_strchr(s, 'z');
    printf("Test 2: %p\n", result);  // Expected output: (nil) or NULL
    
    // Test 3: Search for the null terminator
    result = ft_strchr(s, '\0');
    printf("Test 3: %p\n", result);  // Expected output: pointer to end of string
    
    return 0;
}