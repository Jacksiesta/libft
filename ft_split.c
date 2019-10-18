/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:37:39 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/17 17:08:12 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_char_sep(char const *s, char c)
{
	int x;
	int n;

	x = 0;
	n = 0;
	while (s[x + n] != '\0')
	{
		if (s[x + n] == c)
		{
			while (s[x + n++] == c)
				return (1);
		}
		x++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		word_nbr;
	char	**new;

	new = (char **)malloc(sizeof(char) * word_nbr);
	word_nbr = 1;
	x = 0;
	while (ft_is_char_sep(s, c))
	{
		x = x;
		new[word_nbr][x] = s[x];
		x++;
	}
	new[word_nbr] = (char *)malloc(sizeof(char) * (x + 1));
	new[word_nbr++][x] = '\0';
	return (new);
}
