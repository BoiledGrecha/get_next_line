/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 14:44:38 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/25 14:26:48 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	j = 0;
	k = 0;
	if (!(s))
		return (NULL);
	i = (int)ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && i > 0)
		i--;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j < i)
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
