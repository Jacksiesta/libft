/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:37:39 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/23 18:48:04 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbr_words(const char *s, char c)
{
	int i;

	i = 1;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

static char		*ft_strndup(const char *s1, int y)
{
	int		x;
	char	*target;

	x = 0;
	if (!(target = malloc(sizeof(char) * (y + 1))))
		return (NULL);
	while (x < y)
	{
		target[x] = s1[x];
		x++;
	}
	target[x] = '\0';
	return (target);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		x;
	int		y;

	y = 0;
	if (!s)
		return (NULL);
	if (!(new = (char **)malloc(sizeof(char *) * ft_nbr_words(s, c) + 1)))
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			x = 0;
			while (s[x] && s[x] != c)
				x++;
			if (!(new[y++] = ft_strndup(s, x)))
				return (NULL);
			s += x;
		}
	}
	new[y] = 0;
	return (new);
}
