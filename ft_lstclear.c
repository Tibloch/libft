/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tibloch <tibloch@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 21:12:13 by tibloch           #+#    #+#             */
/*   Updated: 2026/11/18 22:43:17 by tibloch          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*next;

	tmp = *lst;
	while (tmp)
	{
		next = tmp->next;
		(*del)(tmp->content);
		free(tmp);
		tmp = next;
	}
	*lst = NULL;
}

/*void del(void *c, int *count)
{
	*count += 1;
	free(c);
}

int main() {

	t_list *a = ft_lstnew(ft_strdup("1"));
	t_list *b = ft_lstnew(ft_strdup("2"));
	t_list *c = ft_lstnew(ft_strdup("3"));
	t_list *d = ft_lstnew(ft_strdup("4"));
	t_list *e = ft_lstnew(ft_strdup("5"));

	a->next = b;
	b->next = c;
	c->next = d;
	d->next = e;
	
	ft_lstclear(&a, del);

	return 0;
}*/
