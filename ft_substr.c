/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:36:43 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/23 13:44:27 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		x;
	char				*copy;

	x = 0;
	if (!s || !(copy = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (x < len)
	{
		copy[x] = s[x + start];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}
