/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 09:58:04 by codespace         #+#    #+#             */
/*   Updated: 2024/09/01 10:42:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stddef.h>
// #include <string.h>
// #include <stdlib.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *trim;
    size_t  start;
    size_t  end;
    size_t  lentrim;
    size_t  i;

    if(!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    lentrim = end - start;
    trim = (char *)malloc(sizeof (char) * lentrim + 1);
    if(!trim)
        return (NULL);
    i = 0;
    while (start < end)
        trim[i++] = s1[start++];
    trim[i] = '\0';
    return (char *)trim;
}

// #include <stdio.h>

// int main()
// {
//     // Test 1: Trim spaces from both ends
//     char *s1 = "   Hello, World!   ";
//     char *set = " ";
//     char *result = ft_strtrim(s1, set);
//     if (result)
//     {
//         printf("Result: '%s'\n", result);  // Expected: "Hello, World!"
//         free(result);
//     }

//     // Test 2: Trim characters from both ends
//     s1 = "---Hello, World!---";
//     set = "-";
//     result = ft_strtrim(s1, set);
//     if (result)
//     {
//         printf("Result: '%s'\n", result);  // Expected: "Hello, World!"
//         free(result);
//     }

//     // Test 3: No trimming needed
//     s1 = "Hello, World!";
//     set = "-";
//     result = ft_strtrim(s1, set);
//     if (result)
//     {
//         printf("Result: '%s'\n", result);  // Expected: "Hello, World!"
//         free(result);
//     }

//     // Test 4: Trim everything
//     s1 = "aaaa";
//     set = "a";
//     result = ft_strtrim(s1, set);
//     if (result)
//     {
//         printf("Result: '%s'\n", result);  // Expected: ""
//         free(result);
//     }

//     return 0;
// }
