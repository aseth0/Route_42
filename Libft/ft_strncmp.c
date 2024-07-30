/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:42:14 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:44:18 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Compare two strings
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long	pos;
	unsigned char	*ms1;
	unsigned char	*ms2;

	pos = 0;
	ms1 = (unsigned char *)s1;
	ms2 = (unsigned char *)s2;
	while ((ms1[pos] || ms2[pos]) && pos < n)
	{
		if (ms1[pos] != ms2[pos])
			return (ms1[pos] - ms2[pos]);
		pos++;
	}
	return (0);
}
