/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:53:37 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/25 14:57:09 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	*str;
	char	**final;

	if (!s)
		return (NULL);
	i = 0;
	j = -1;
	if (!(str = ft_strip(s, c)))
		return (NULL);
	while (str[++j])
	{
		if ((str[j] != c && str[j + 1] == c) || (str[j + 1] == '\0'))
			i++;
	}
	if (!(final = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	final[i] = 0;
	ft_fill_mass(s, final, i, c);
	return (final);
}
