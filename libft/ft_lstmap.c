/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 15:01:39 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/22 18:24:33 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*res;
	t_list		*new;
	t_list		*elem;

	if (!lst || !f)
		return (NULL);
	elem = f(lst);
	if (!(res = ft_lstnew(elem->content, elem->content_size)))
		return (NULL);
	new = res;
	lst = lst->next;
	while (lst)
	{
		elem = f(lst);
		if (!(res->next = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
		res = res->next;
		lst = lst->next;
	}
	return (new);
}
