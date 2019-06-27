/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:41:41 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/22 15:49:20 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				count;
	unsigned char	*str;

	str = (unsigned char *)s;
	count = (int)n;
	if (!count)
		return (NULL);
	count--;
	while (count >= 0)
	{
		if (*str == (unsigned char)c)
			return ((unsigned char *)str);
		str++;
		count--;
	}
	return (NULL);
}
