/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 23:57:45 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:52:06 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Dele the set at first and end of an string
 * @param s1 String to filter
 * @param set String to eliminate
 * @return The filtered string
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;

	start = -1;
	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
		{
			if (start == -1)
				start = i;
			end = i;
		}
		i++;
	}
	if (start == -1)
		return (ft_strdup(""));
	return (ft_substr(s1, start, (end - start) + 1));
}
