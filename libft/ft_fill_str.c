/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 14:54:44 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/25 16:42:30 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_fill_str(char const *s, int beg, int end)
{
	char	*str;
	int		i;
	int		all;

	i = -1;
	all = end - beg + 1;
	if (!(str = (char *)malloc(sizeof(char) * (all + 1))))
		return (NULL);
	str[all] = '\0';
	while (++i < all)
		str[i] = s[beg++];
	return (str);
}
