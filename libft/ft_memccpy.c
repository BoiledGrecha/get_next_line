/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:40:20 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/14 15:55:53 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				count;

	count = (int)n;
	if (!count)
		return (NULL);
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	count--;
	while (count >= 0)
	{
		*str1 = *str2;
		str1++;
		if (*str2 == (unsigned char)c)
			return (str1);
		str2++;
		count--;
	}
	return (NULL);
}
