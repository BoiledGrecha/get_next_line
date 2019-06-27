/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:42:32 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/13 19:32:31 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				count;

	count = (int)n;
	if (!count || dest == src)
		return (dest);
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	while (--count >= 0)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	return (dest);
}
