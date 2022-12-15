/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontain <afontain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:50:05 by afontain          #+#    #+#             */
/*   Updated: 2022/11/15 19:02:36 by afontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*liste;
	t_list		*cell;

	if (!lst || !f)
		return (NULL);
	liste = 0;
	while (lst)
	{
		cell = ft_lstnew((*f)(lst->content));
		if (!cell)
		{
			ft_lstclear(&liste, del);
			return (NULL);
		}
		ft_lstadd_back(&liste, cell);
		lst = lst->next;
	}
	return (liste);
}
