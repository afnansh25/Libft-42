/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:41:38 by codespace         #+#    #+#             */
/*   Updated: 2024/08/22 15:11:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    unsigned const char *hay;
    unsigned const char *need;
    size_t  i;
    size_t  j;

    i = 0;
    hay = (unsigned const char *)haystack;
    need = (unsigned const char *)needle;
    if(need[i] == '\0')
        return (char *)haystack;
    while(i < n && hay[i])
    {
        j = 0;
            while (need[j] && ((i + j) < n))
            {
                if (hay[i + j] != need[j])
                    break;
                j++;
            }
        if(need[j] == '\0')
            return (char *)(haystack + i);
        i++;
    }
    return (NULL);
}

#include <stdio.h>
#include <string.h>

int main()
{
    // Test cases
    char *haystack = "Hello, World!";
    char *needle = "World";
    
    // Test 1: Needle found within the first n characters
    char *result = ft_strnstr(haystack, needle, 13);
    printf("Found 'World': %s\n", result);  // Expected: "World!"
    
    // Test 2: Needle not found within the first n characters
    result = ft_strnstr(haystack, needle, 12);
    printf("Not found 'World': %p\n", result);  // Expected: (nil) or NULL
    
    // Test 3: Needle is an empty string
    result = ft_strnstr(haystack, "", 5);
    printf("Empty needle: %s\n", result);  // Expected: "Hello, World!"
    
    return 0;
}
