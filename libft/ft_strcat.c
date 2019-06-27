/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:46:08 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/14 16:18:48 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	int		j;

	i = (int)ft_strlen(dest);
	j = (int)ft_strlen(src);
	while (j >= 0)
	{
		dest[i + j] = src[j];
		j--;
	}
	return (dest);
}
