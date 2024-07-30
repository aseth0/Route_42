/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseth <aseth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:20:16 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/24 13:28:23 by aseth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*actual;

	actual = lst;
	if (lst == NULL)
		return (NULL);
	while (actual->next != NULL)
	{
		actual = actual->next;
	}
	return (actual);
}
