/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseth <aseth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 11:04:30 by aseth             #+#    #+#             */
/*   Updated: 2023/12/25 20:29:23 by aseth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*this;

	if (*lst == NULL)
	{
		return ;
	}
	current = *lst;
	while (current->next)
	{
		this = current->next;
		ft_lstdelone(current, del);
		current = this;
	}
	ft_lstdelone(current, del);
	*lst = NULL;
}
