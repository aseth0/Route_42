/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:10:52 by ucabanil          #+#    #+#             */
/*   Updated: 2024/02/05 13:48:37 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	cnt;

	cnt = 0;
	if (str == NULL)
		return (cnt);
	while (str[cnt])
		cnt++;
	return (cnt);
}

char	*ft_strchr(const char *s, int c)
{
	const char			*str;

	if (s == NULL)
		return (NULL);
	str = s;
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;
	unsigned long	cnt;

	cnt = 0;
	to = (unsigned char *)dest;
	from = (unsigned char *)src;
	if (dest > src)
	{
		while (n-- > 0)
			to[n] = from[n];
		return (dest);
	}
	if (src > dest)
	{
		while (cnt < n)
		{
			to[cnt] = from[cnt];
			cnt++;
		}
		return (to);
	}
	return (to);
}

void	*ft_free(char **stack)
{
	if (*stack)
	{
		free(*stack);
		*stack = NULL;
	}
	return (NULL);
}
