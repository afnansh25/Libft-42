/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:26:42 by codespace         #+#    #+#             */
/*   Updated: 2024/08/25 13:38:52 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t num, size_t size)
{
    void    *ptr;
    size_t  total_size;
    
    total_size = num * size;
    ptr = (malloc)total_size;
    if (!ptr)
        return (NULL);
    ft_bezero(ptr, total_size);
    return (ptr);
}
