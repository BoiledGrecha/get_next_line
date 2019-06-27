/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 21:16:10 by idamion-          #+#    #+#             */
/*   Updated: 2019/01/23 21:49:01 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void		ft_fill_in_strucstr(t_gnl_lst *struc, int i)
{
	if (ft_strlen(struc->str) == 0)
		return ;
	struc->str += i;
	return ;
}

static int		get_num_ns(char *str)
{
	int		i;
	int		count;

	i = -1;
	count = 0;
	while (str[++i])
	{
		if (str[i] == '\n')
			count++;
	}
	return (count);
}

static void		fill_struct(t_gnl_lst *args, int fd)
{
	char			*temp;
	int				ret;
	char			buf[BUFF_SIZE + 1];

	if (!(args->str))
	{
		args->str = ft_strnew(0);
		args->del_me = &(args->str[0]);
	}
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		temp = ft_strjoin(args->str, buf);
		ft_strdel(&(args->del_me));
		args->str = temp;
		args->del_me = temp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	args->del_me = &(args->str[0]);
	args->num += get_num_ns(args->str);
}

static void		ft_beetween(t_gnl_lst *struc, char **line)
{
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (struc->str[i] != '\n' && struc->str[i] != '\0')
		i++;
	if (!(*line = (char *)malloc(sizeof(char) * (i + 1))))
		return ;
	while (k != i)
	{
		(*line)[k] = struc->str[k];
		k++;
	}
	(*line)[k] = '\0';
	k++;
	ft_fill_in_strucstr(struc, k);
}

int				get_next_line(const int fd, char **line)
{
	static t_gnl_lst	arr[OPEN_MAX];

	if (read(fd, NULL, 0) < 0 || BUFF_SIZE == 0 || fd > OPEN_MAX)
		return (-1);
	if (arr[fd].str == NULL || arr[fd].num == 0)
		fill_struct(&arr[fd], fd);
	if (arr[fd].num < 0)
	{
		*line = ft_strnew(0);
		return (0);
	}
	else
	{
		ft_beetween(&arr[fd], line);
		arr[fd].num -= 1;
		if (ft_strlen(*line) == 0 && arr[fd].num == -1)
			return (0);
		return (1);
	}
}
