/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:21:31 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:46:18 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Compare two parts of memories
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ms1;
	unsigned char	*ms2;
	size_t			itr;

	ms1 = (unsigned char *)s1;
	ms2 = (unsigned char *)s2;
	itr = 0;
	if (n == 0)
		return (0);
	while (itr < n && ms1[itr] == ms2[itr])
		itr++;
	if (itr == n)
		return (0);
	return (ms1[itr] - ms2[itr]);
}
