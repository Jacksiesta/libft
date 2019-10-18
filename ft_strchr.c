/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:43:30 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/14 09:19:16 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int x;

	x = 0;
	while (s[x])
	{
		if (s[x] == (char)c)
			return ((char *)&s[x]);
		x++;
	}
	if (s[x] == (char)c)
		return ((char *)&s[x]);
	return (NULL);
}
