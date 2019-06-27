/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strip.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/25 14:51:11 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/25 14:51:40 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strip(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	j = 0;
	k = 0;
	i = (int)ft_strlen(s) - 1;
	while ((s[i] == c) && i > 0)
		i--;
	while ((s[j] == c) && j < i)
		j++;
	if (!(str = (char *)malloc(sizeof(char) * (i - j + 2))))
		return (NULL);
	if (i != j)
	{
		while (j <= i)
			str[k++] = s[j++];
	}
	str[k] = '\0';
	return (str);
}
