/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:58:43 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/22 17:38:10 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_length(int n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		len++;
		n++;
		n *= -1;
	}
	while (n >= 10)
	{
		len++;
		n = n / 10;
	}
	return (++len);
}

static void		go_print(int n, int len, int fd)
{
	char	c;

	c = '0' + n % 10;
	if (len == 1)
	{
		write(fd, &c, 1);
		return ;
	}
	go_print(n / 10, len - 1, fd);
	write(fd, &c, 1);
}

void			ft_putnbr_fd(int n, int fd)
{
	char	last_print;
	int		i;

	if (n < 0)
	{
		write(fd, "-", 1);
		last_print = '0' - n % 10;
		n = n / 10;
		n *= -1;
	}
	else
	{
		last_print = '0' + n % 10;
		n = n / 10;
	}
	if (n != 0)
	{
		i = ft_length(n);
		go_print(n, i, fd);
	}
	write(fd, &last_print, 1);
}
