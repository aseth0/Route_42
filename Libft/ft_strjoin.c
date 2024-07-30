/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:42:40 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:50:13 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Concatenate two stringss
 * @return strend
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	int		strlsize;
	char	*strend;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	strlsize = s1len + s2len + 1;
	strend = malloc(strlsize * sizeof(char));
	if (strend)
	{
		strend[0] = 0;
		ft_strlcat(strend, s1, strlsize);
		ft_strlcat(strend, s2, strlsize);
	}
	return (strend);
}
