/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseth <aseth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:24:04 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 21:23:24 by aseth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * @brief Give an piece of string
 * @param s String given
 * @param start Pointer to the start of the string 
 * @param len Leng of the returned string
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*str;

	str = NULL;
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	str = malloc((len + 1) * sizeof(char));
	if (str)
		ft_strlcpy(str, (s + start), len + 1);
	return (str);
}
