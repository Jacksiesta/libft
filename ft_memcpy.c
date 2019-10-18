/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:30:59 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/18 14:54:09 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*dest;
	unsigned char	*source;

	x = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest == NULL || source == NULL)
		return (NULL);
	while (x < n)
	{
		dest[x] = source[x];
		x++;
	}
	return (dest);
}
