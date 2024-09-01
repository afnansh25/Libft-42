/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 06:20:47 by codespace         #+#    #+#             */
/*   Updated: 2024/09/01 08:42:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sstr;
    size_t i;
    
    i = 0;
    if (!s)
        return (NULL);
    if (ft_strlen(s) < start)
        len = 0;
    if (ft_strlen(s) - start < len)
        len = ft_strlen(s) - start;
    sstr = (char *)malloc(sizeof (char) * len + 1);
    if(!sstr)
        return (NULL);
    while (i < len)
    {
        sstr[i++] = s[start++];
    }
    sstr[i] = '\0';
    return (char *)sstr;
    
}

// #include <stdio.h>
// int main()
// {
//     // Test 1: Extract substring from the middle
//     char *s = "Hello, World!";
//     char *substr = ft_substr(s, 7, 5);
//     if (substr)
//     {
//         printf("Substring: %s\n", substr);  // Expected: "World"
//         free(substr);
//     }

//     // Test 2: Extract substring starting at 0
//     substr = ft_substr(s, 0, 5);
//     if (substr)
//     {
//         printf("Substring: %s\n", substr);  // Expected: "Hello"
//         free(substr);
//     }

//     // Test 3: Start index out of bounds
//     substr = ft_substr(s, 20, 5);
//     if (substr)
//     {
//         printf("Substring: %s\n", substr);  // Expected: ""
//         free(substr);
//     }

//     // Test 4: Length exceeds the remaining length of the string
//     substr = ft_substr(s, 7, 50);
//     if (substr)
//     {
//         printf("Substring: %s\n", substr);  // Expected: "World!"
//         free(substr);
//     }

//     return 0;
// }