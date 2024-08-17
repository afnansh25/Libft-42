/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:08:05 by codespace         #+#    #+#             */
/*   Updated: 2024/08/17 18:12:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') && ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
        return (c);
    return (0);
}

int ft_isalnum(int c)
{
    if (ft_isdigit(c) || ft_isalpha(c))
        return (c);
    return (0);
}