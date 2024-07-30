/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:46:12 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:39:35 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Fill with X character N positions in a memory
*/
void	*ft_memset(void *str, int c, size_t n)
{
	char			*cadena;
	unsigned long	cnt;

	cadena = (char *)str;
	cnt = 0;
	while (cnt < n)
		cadena[cnt++] = (char)c;
	return (str);
}
