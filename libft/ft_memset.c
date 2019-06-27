/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 13:51:32 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/13 16:45:03 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			zero;

	zero = 0;
	if (len == zero)
		return (b);
	str = (unsigned char *)b;
	while (len)
	{
		*str = c;
		str++;
		len--;
	}
	return (b);
}
