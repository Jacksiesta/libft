/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:49:32 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/31 20:08:27 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **alst, t_list *new)
{
    t_list  *res;

    if (!alst || !new)
        return (NULL);
    res->content = *alst;
    res->next = new;
}