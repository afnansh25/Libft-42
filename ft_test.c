/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:18:47 by codespace         #+#    #+#             */
/*   Updated: 2024/08/21 17:33:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
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