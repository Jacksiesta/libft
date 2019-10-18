/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:43:54 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/18 20:15:24 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_does_char_exist(char c, char const *set)
{
	int	y;

	y = 0;
	while (set[y] != '\0')
	{
		if (set[y] == c)
			return (0);
		y++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	x;
	size_t	z;
	char	*new;

	x = 0;
	z = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (len && (s1[x] != '\0') && ft_does_char_exist(s1[len - 1], set))
		len--;
	while (len-- && (s1[x] != '\0') && ft_does_char_exist(s1[x++], set))
		if (!(new = (char *)malloc(sizeof(char *) * (len + 1))))
			return (NULL);
	while (len--)
	{
		new[z] = s1[x];
		x++;
		z++;
	}
	new[z] = '\0';
	return (new);
}
