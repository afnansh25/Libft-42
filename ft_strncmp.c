/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:22:32 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 14:00:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
