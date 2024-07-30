/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:07:45 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:36:22 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 @brief Search an instrin in another
 @return haystack pointer where start the needle
 @param haystack, strin where search
 @param needle string withc search
 @param len leng until search
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- >= ft_strlen(needle))
		if (!ft_strncmp(haystack++, needle, ft_strlen(needle)))
			return ((char *)(haystack - 1));
	return (NULL);
}
