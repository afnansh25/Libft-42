/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:07:38 by codespace         #+#    #+#             */
/*   Updated: 2024/09/07 09:30:10 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char    **ft_split(char const *s, char c)
{
    size_t  in_word;
    size_t  count;
    size_t  i;
    size_t  j;
    size_t  k;
    size_t  start;
    char    **split;
    
    i = 0;
    while(s[i])
    {
        if(s[i] != c && !in_word)
        {
            count++;
            in_word = 1;
        }
        else if (s[i] == c)
            in_word = 0;
        i++;
    }
    split = (char **)malloc(sizeof (char *) * (count + 1));
    if(!split)
        return (NULL);
    i = 0;
    k = 0;
    while (s[i])
    {
        while (s[i] == c)
        i++;
        if (s[i])
        {
            start = i;
            while (s[i] != c && s[i])
                i++;
            split[k] = (char *)malloc(sizeof (char) * (i - start + 1));
            if(!split[k])
            {
                while (k > 0)
                    free(split[--k]);
                free(split);
                return (NULL);
            }
            j = 0;
            while (start < i)
                split[k][j++] = s[start++];
            split[k][j] = '\0';
            k++;
        }
    }
    split[k] = NULL;
    return (split);
}

#include <stdio.h>

int main()
{
    // Test 1: Basic split
    char *s = "Hello World 42";
    char **result = ft_split(s, ' ');
    for (int i = 0; result[i]; i++)
    {
        printf("Substring %d: '%s'\n", i, result[i]);
        free(result[i]);
    }
    free(result);

    // Test 2: Delimiters at the start and end
    s = "   Hello   World   ";
    result = ft_split(s, ' ');
    for (int i = 0; result[i]; i++)
    {
        printf("Substring %d: '%s'\n", i, result[i]);
        free(result[i]);
    }
    free(result);

    // Test 3: Multiple consecutive delimiters
    s = "Hello,,,World,,,42";
    result = ft_split(s, ',');
    for (int i = 0; result[i]; i++)
    {
        printf("Substring %d: '%s'\n", i, result[i]);
        free(result[i]);
    }
    free(result);

    return 0;
}
