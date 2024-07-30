/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:46:34 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:47:30 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicate a string
*/
char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	slen;

	slen = ft_strlen(s1) + 1;
	str = malloc(slen * sizeof(char));
	if (str == NULL)
		return (str);
	ft_strlcpy(str, (char *)s1, slen);
	return (&str[0]);
}
