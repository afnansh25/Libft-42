/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:55:49 by codespace         #+#    #+#             */
/*   Updated: 2024/08/25 13:12:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#incldue "libft.h"
//#include <stddef.h>

int ft_atoi(const char *str)
{
    size_t i;
    int    sign;
    int    result;
    
    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == 43 || str[i] == 45)
    {
        if (str[i] == 45)  
            sign = -1;
        i++;
        break;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = 10 * result + str[i] - 48;
        i++;
    }
    return (result * sign);
}

// #include <stdio.h>

// int main()
// {
//     // Test cases
//     char *str1 = "12345";
//     char *str2 = "   -6789";
//     char *str3 = "42 is the answer";
//     char *str4 = "abc123";
//     char *str5 = "  +-+987";
    
//     printf("Test 1: %d\n", ft_atoi(str1));  // Expected: 12345
//     printf("Test 2: %d\n", ft_atoi(str2));  // Expected: -6789
//     printf("Test 3: %d\n", ft_atoi(str3));  // Expected: 42
//     printf("Test 4: %d\n", ft_atoi(str4));  // Expected: 0
//     printf("Test 5: %d\n", ft_atoi(str5));  // Expected: 0
    
//     return 0;
// }

