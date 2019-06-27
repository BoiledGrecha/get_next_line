/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:53:36 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/13 16:53:51 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = ft_strlen(dest);
	while (n > 0 && *src)
	{
		dest[i] = *src;
		src++;
		i++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
