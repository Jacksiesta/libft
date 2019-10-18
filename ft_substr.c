/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 19:36:43 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/17 17:26:01 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		x;
	char	*dest;

	dest = malloc(sizeof(char) * (len + 1));
	x = 0;
	if (s == NULL)
		return (NULL);
	while (s[start])
	{
		dest[x] = s[start];
		x++;
		start++;
	}
	dest[x] = '\0';
	return (dest);
}
