/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:57:44 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/14 20:32:46 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	j = (int)ft_strlen(needle);
	if (!j)
		return ((void *)haystack);
	while (haystack[++i])
	{
		if (haystack[i] == needle[0])
		{
			k = 0;
			while (++k < j)
				if (haystack[i + k] != needle[k])
					break ;
			if (--k == (j - 1))
				return ((void *)(haystack + i));
		}
	}
	return (NULL);
}
