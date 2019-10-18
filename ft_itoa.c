/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <jherrald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:02:23 by jherrald          #+#    #+#             */
/*   Updated: 2019/10/18 19:14:46 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_check_size(int num)
{
    int x;

    x = 0;
    if (num < 0)
        x = 1;
    else
        x = 0;
    while (num != 0)
    {
        num = num / 10;
        x++;
    }
    return (x);
}

char	*ft_itoa(int n)
{
    unsigned int    num;
    int             sign;
    int             size;
    char            *str;

    sign = (n < 0) ? 1 : 0;
    num = (n < 0) ? -n : n;
    size = (ft_check_size(n));
    if (!(str = (char *)malloc(sizeof(char) * size + 1)));
        return (NULL);
    str[size] = '\0';
    while (size >= 0)
    {
        str[size] = num % 10 + '0';
        num = num / 10;
        size--;
    }
    if (sign == 1)
        str[0] = '-';
    return (str);
}
