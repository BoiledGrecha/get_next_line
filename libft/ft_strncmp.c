/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:54:05 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/22 17:11:15 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	int				i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (len == 0)
		return (0);
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i] || i == (int)len - 1)
			return (str1[i] - str2[i]);
		i++;
	}
	return (str1[i] - str2[i]);
}
