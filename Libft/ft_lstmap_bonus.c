/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 21:07:23 by aseth             #+#    #+#             */
/*   Updated: 2023/12/27 13:02:45 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpd;
	t_list	*new_node;

	if (lst == NULL)
		return (NULL);
	cpd = NULL;
	while (lst)
	{
		new_node = ft_lstnew(0);
		if (new_node == NULL)
		{
			ft_lstclear(&cpd, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		ft_lstadd_back(&cpd, new_node);
		lst = lst->next;
	}
	return (cpd);
}
