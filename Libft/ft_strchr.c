/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:33:34 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/11 18:28:08 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
/**
 @brief Return the first coincidence between two strings
*/
char	*ft_strchr(const char *s, int c)
{
	const char			*str;
	unsigned long		slen;

	str = s;
	slen = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)&str[slen]);
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
