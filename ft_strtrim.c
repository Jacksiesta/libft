/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:43:54 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/23 17:43:42 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const *set)
{
	int x;

	x = 0;
	while (set[x])
	{
		if (c == set[x])
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	// char	*new;
	// size_t	len;
	// size_t 	x;

	// if (!s1 || !set)
	// 	return (NULL);
	// len = ft_strlen(s1);
	// x = 0;
	// while (ft_check(s1[x], set))
	// 	x++;
	// while (ft_check(s1[len], set))
	// 	len--;
	// if (!s1)
	// 	return (0);
	// if (!(new = (char *)malloc(sizeof(char) * (len + 1)))
	// 	return (NULL);
	// new = ft_substr(s1, x, len - x);
	// if (new == 0)
	// 	return ("\0");
	// return (new);
}
