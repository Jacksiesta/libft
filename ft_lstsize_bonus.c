/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:02:04 by jherrald          #+#    #+#             */
/*   Updated: 2019/11/07 15:34:34 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	t_list	*res;
	int		x;

	if (!lst)
		return (0);
	x = 0;
	res = lst;
	while (res)
	{
		res = res->next;
		x++;
	}
	return (x);
}
