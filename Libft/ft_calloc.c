/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:02:07 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:47:06 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Reserve X size of memory and fill with 0
*/
void	*ft_calloc(size_t count, size_t size)
{
	char			*str;
	size_t			ts;

	ts = size * count;
	str = malloc(ts * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_bzero(str, ts);
	return (&str[0]);
}
