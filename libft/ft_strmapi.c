/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:52:19 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/25 14:12:51 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		j;
	char	*str;

	i = -1;
	j = 0;
	if (!(s) || !(f))
		return (NULL);
	while (s[++j])
		j++;
	if (!(str = (char*)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	while (++i < j)
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}
