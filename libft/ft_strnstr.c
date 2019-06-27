/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:55:18 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/14 21:05:32 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	j = (int)ft_strlen(needle);
	if (!j)
		return ((void *)haystack);
	while (haystack[++i] && i < (int)len)
	{
		if (haystack[i] == needle[0])
		{
			k = 0;
			while (++k < j)
				if (haystack[i + k] != needle[k] || (i + k) > (int)len)
					break ;
			if (--k == (j - 1))
				return ((void *)(haystack + i));
		}
	}
	return (NULL);
}
