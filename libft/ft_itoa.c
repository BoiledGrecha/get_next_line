/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 18:21:03 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/26 20:17:23 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char			*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_length_itoa(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	while (--i >= 0 && (n >= 10 || n <= -10))
	{
		str[i] = n % 10 < 0 ? ('0' + (-1) * (n % 10)) : ('0' + n % 10);
		n = n / 10;
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i] = '0' + n;
	return (str);
}
