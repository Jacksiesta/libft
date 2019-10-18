/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 18:28:07 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/18 14:51:26 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*str;

	x = 0;
	str = (unsigned char *)s;
	while (x < n)
	{
		if (str[x] == (unsigned char)c)
			return (str + x);
		x++;
	}
	return (NULL);
}
