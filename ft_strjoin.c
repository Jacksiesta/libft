/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:36:15 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/17 17:17:07 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		s1len;
	int		index;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1len = ft_strlen(s1);
	index = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (s1len + index));
	if (new == 0)
		return (NULL);
	index = 0;
	while (s1[index] != '\0')
	{
		new[index] = s1[index];
		index++;
	}
	index = 0;
	while (s2[index] != '\0')
	{
		new[s1len + index] = s2[index];
		index++;
	}
	new[s1len + index] = '\0';
	return (new);
}
