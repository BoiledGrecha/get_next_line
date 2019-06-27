/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:54:58 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/17 14:47:06 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = -1;
	if (!(str = (char*)malloc(size + 1)))
		return (NULL);
	while (++i <= (int)size)
		str[i] = '\0';
	return (str);
}
