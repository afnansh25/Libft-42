/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 08:48:35 by codespace         #+#    #+#             */
/*   Updated: 2024/09/01 09:07:33 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stddef.h>
// #include <string.h>
// #include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *join;
    size_t  len1;
    size_t  len2;
    size_t  i;
    size_t  j;

    if(!s1 || !s2)
        return(NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    join = (char *)malloc(sizeof (char) * (len1 + len2 + 1));
    if (!join)
        return (NULL);
    i = 0;
    while (i < len1)
    {
        join[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < len2)
    {
        join[i + j] = s2[j];
        j++;
    }
    join[i + j] = '\0';
    return (char *)join;
}

// #include <stdio.h>

// int main()
// {
//     // Test 1: Concatenate two normal strings
//     char *s1 = "Hello, ";
//     char *s2 = "World!";
//     char *result = ft_strjoin(s1, s2);
//     if (result)
//     {
//         printf("Result: %s\n", result);  // Expected: "Hello, World!"
//         free(result);
//     }

//     // Test 2: Concatenate an empty string with another string
//     s1 = "";
//     s2 = "Test";
//     result = ft_strjoin(s1, s2);
//     if (result)
//     {
//         printf("Result: %s\n", result);  // Expected: "Test"
//         free(result);
//     }

//     // Test 3: Concatenate two empty strings
//     s1 = "";
//     s2 = "";
//     result = ft_strjoin(s1, s2);
//     if (result)
//     {
//         printf("Result: '%s'\n", result);  // Expected: ""
//         free(result);
//     }

//     return 0;
// }
