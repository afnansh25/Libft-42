/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:41:02 by codespace         #+#    #+#             */
/*   Updated: 2024/09/10 14:54:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;
    
    if (!lst || !new)
        return (NULL;
    if (lst == NULL)
        *lst = new;
    else
    {
        last = *lst
        while (last ->next != NULL)
            last = last ->next;
        last ->next = new;
    }
    new ->next = NULL;
}