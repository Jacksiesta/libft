/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 17:39:09 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/31 20:08:43 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list  *res;
 
    
    if (!alst || !new)
        return (NULL);
    res = *alst;
    while (res)
    {
        res = res->next;
    }
    res = new;
}