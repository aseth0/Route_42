/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:32:43 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:40:29 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 @brief Return a copied string
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long	cnt;

	cnt = -1;
	if (!src && !dst)
		return (dst);
	while (++cnt < n)
		((unsigned char *)dst)[cnt] = ((unsigned char *)src)[cnt];
	return (dst);
}
