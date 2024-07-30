/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 11:28:18 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:41:01 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Return a copy of a string checking the overlaph
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;
	unsigned long	cnt;

	cnt = 0;
	to = (unsigned char *)dest;
	from = (unsigned char *)src;
	if (dest > src)
	{
		while (n-- > 0)
			to[n] = from[n];
		return (dest);
	}
	if (src > dest)
	{
		while (cnt < n)
		{
			to[cnt] = from[cnt];
			cnt++;
		}
		return (dest);
	}
	return (dest);
}
