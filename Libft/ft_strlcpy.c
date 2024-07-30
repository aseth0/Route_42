/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:13:02 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/17 14:29:34 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Copy a string
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long	srcsize;
	unsigned long	cnt;

	cnt = 0;
	srcsize = ft_strlen(src);
	if (dstsize != 0)
	{
		while (src[cnt] != '\0' && cnt < dstsize - 1)
		{
			dst[cnt] = src[cnt];
			cnt++;
		}
		dst[cnt] = '\0';
	}
	return (srcsize);
}
