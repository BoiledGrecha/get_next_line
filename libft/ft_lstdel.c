/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idamion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 19:36:19 by idamion-          #+#    #+#             */
/*   Updated: 2018/12/19 20:14:25 by idamion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	*this;

	if (!del || !alst)
		return ;
	this = *alst;
	while (this)
	{
		next = this->next;
		del(this->content, this->content_size);
		free(this);
		this = next;
	}
	*alst = NULL;
}
