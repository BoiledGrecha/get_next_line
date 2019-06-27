/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:50:59 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/14 19:01:18 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		j;
	size_t		i;
	size_t		k;

	k = 0;
	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (!j)
		return (i);
	if (i >= size)
		return (size + j);
	j += i;
	while (i < (size - 1))
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	return (j);
}
