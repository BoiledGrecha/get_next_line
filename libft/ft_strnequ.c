/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:54:40 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/25 14:16:58 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	i = 0;
	if (!(s1) || !(s2))
		return (0);
	if ((int)n == 0)
		return (1);
	while (s1[i] && s2[i] && i < (int)n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (i == (int)n || (!s1[i] && !s2[i]))
		return (1);
	return (0);
}
