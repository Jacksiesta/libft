/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 20:44:12 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/25 17:28:21 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (!*str || (!(str = (char *)malloc(sizeof(char) * (count * size)))))
		return (NULL);
	ft_bzero(str, size * count);
	return ((void*)str);
}
