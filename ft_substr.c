/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:36:43 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/25 17:15:58 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		x;
	char				*copy;

	if (ft_strlen(s) - (size_t)start <= len)
		len = ft_strlen(s) - (size_t)start;
	if ((size_t)start >= ft_strlen(s))
		len = 0;
	if (!s || !(copy = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	x = 0;
	while (x < len)
	{
		copy[x] = s[x + start];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}
