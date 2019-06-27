/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:51:42 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/25 14:10:30 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		j;
	char	*str;

	i = -1;
	j = 0;
	if (!(s) || !(f))
		return (NULL);
	while (s[j])
		j++;
	if (!(str = (char*)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	while (++i < j)
		str[i] = f(s[i]);
	str[i] = '\0';
	return (str);
}
