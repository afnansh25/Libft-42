/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:58:31 by codespace         #+#    #+#             */
/*   Updated: 2024/09/15 14:08:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *temp;
    
    if (lst == NULL || *lst == NULL)
        return (NULL);
    while (*lst != NULL)
    {
        temp = (*lst) -> next;
        if (del != NULL)
            del((*lst) -> content);
        free(*lst);
        *lst = temp;
    }
    *lst = NULL;
}