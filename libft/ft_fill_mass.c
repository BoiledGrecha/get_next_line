/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_mass.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 14:53:23 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/25 16:57:46 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_fill_mass(char const *s, char **final, int i, char c)
{
	int		k;
	int		l;
	int		j;

	k = 0;
	j = 0;
	while (k < i)
	{
		while (s[j] == c)
			j++;
		l = j;
		while (s[l + 1] != c && s[l + 1] != '\0')
			l++;
		final[k] = ft_fill_str(s, j, l);
		if (final[k] == NULL)
		{
			ft_del_mass(final);
			return ;
		}
		j = l + 1;
		k++;
	}
}
