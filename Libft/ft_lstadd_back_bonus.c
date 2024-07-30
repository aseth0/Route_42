/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseth <aseth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 11:55:32 by aseth             #+#    #+#             */
/*   Updated: 2023/12/24 13:28:40 by aseth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*actual;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		actual = ft_lstlast(*lst);
		actual->next = new;
	}
}
