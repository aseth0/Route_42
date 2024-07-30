/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseth <aseth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:00:28 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 22:18:54 by aseth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Return a leng of a string
*/
size_t	ft_strlen(const char *str)
{
	int	cnt;
	int	i;

	cnt = 0;
	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		i++;
		cnt++;
	}
	return (cnt);
}
