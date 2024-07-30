/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 20:07:49 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:41:32 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/**
 @brief Contatenate two strings
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned long	cnt;
	unsigned long	srclen;
	unsigned long	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	cnt = 0;
	while (src[cnt] && cnt + dstlen +1 < dstsize)
	{
		dst[(dstlen + cnt)] = src[cnt];
		cnt++;
	}
	if (dstlen <= dstsize)
	{
		dst[dstlen + cnt] = '\0';
		return (srclen + dstlen);
	}
	return (dstsize + srclen);
}
