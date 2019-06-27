/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 14:45:06 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/25 15:37:53 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy_rev(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	int		count;

	count = (int)n;
	str1 = (char *)dest + n - 1;
	str2 = (char *)src + n - 1;
	if (!count || str1 == str2)
		return (dest);
	count--;
	while (count >= 0)
	{
		*str1 = *str2;
		str1--;
		str2--;
		count--;
	}
	return (dest);
}
