/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 23:09:49 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:44:03 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Return the last coincidence between two strings
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*found;

	str = (char *)s;
	found = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
			found = str;
		str++;
	}
	if (!(c % 0400))
		return (str);
	return (found);
}
