/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:22:32 by codespace         #+#    #+#             */
/*   Updated: 2024/08/21 16:56:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stddef.h>
#include "libft.c"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    unsigned const char   *st1;
    unsigned const char   *st2;
    
    i = 0;
    st1 = (unsigned const char *)s1;
    st2 = (unsigned const char *)s2;
    while (i < n)
    {
        if (st1[i] != st2[i])
            return (s1[i] - s2[i]);
        if (st1[i] == '\0' || st2[i] == '\0')
        break;
        i++;
    } 
    return (0);
}

// #include <stdio.h>

// int main()
// {
//     // Test cases
//     char *s1 = "apple";
//     char *s2 = "apricot";
//     printf("Test 1: %d\n", ft_strncmp(s1, s2, 3));  // Expected output: <0

//     s1 = "bpple";
//     s2 = "aanana";
//     printf("Test 2: %d\n", ft_strncmp(s1, s2, 3));  // Expected output: > 0

//     s1 = "apple";
//     s2 = "applesauce";
//     printf("Test 3: %d\n", ft_strncmp(s1, s2, 10)); // Expected output: < 0

//     s1 = "apple";
//     s2 = "apple";
//     printf("Test 4: %d\n", ft_strncmp(s1, s2, 10)); // Expected output: 0

//     return 0;
// }