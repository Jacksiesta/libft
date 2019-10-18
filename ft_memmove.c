/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:47:43 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/17 17:05:13 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			x;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
	{
		x = len;
		while (x > 0)
		{
			d[x - 1] = s[x - 1];
			x--;
		}
	}
	else if (d < s)
	{
		x = 0;
		while (x < len)
		{
			d[x] = s[x];
			x++;
		}
	}
	return (dst);
}
