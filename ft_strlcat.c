/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:20:05 by codespace         #+#    #+#             */
/*   Updated: 2024/08/18 13:26:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    *strlcat(char *dst, const char *src, size_t size)
{
    size_t  srclen;
    size_t  dstlen;
    size_t  i;
    
    srclen = ft_strlen(src);
    dstlen = ft_strlen(dst);
    if (size == 0)
        return(srclen + dstlen);
    while(i < (size -1) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(dstlen + srclen);
}