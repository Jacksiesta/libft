/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:07:19 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/17 20:53:02 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		x;
	int		y;

	x = 0;
	y = 0;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new == 0)
		return (NULL);
	while (s[x])
	{
		new[y] = f((unsigned int)x, s[x]);
		x++;
		y++;
	}
	new[y] = '\0';
	return (new);
}
