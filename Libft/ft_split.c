/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseth <aseth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:31:27 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/19 08:59:14 by aseth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	safe_reserv(char **farr, int line, size_t sub_len)
{
	int	i;

	i = 0;
	farr[line] = malloc(sub_len);
	if (NULL == farr[line])
	{
		while (i < line)
			free(farr[i++]);
		free(farr);
		return (1);
	}
	return (0);
}

size_t	ft_arrlen(const char *str, int c)
{
	size_t	tokens;
	int		in_token;

	tokens = 0;
	while (*str)
	{
		in_token = 0;
		if (*str == c && *str)
			++str;
		while (*str != c && *str)
		{
			if (!in_token)
			{
				++tokens;
				in_token = 1;
			}
			++str;
		}
	}
	return (tokens);
}

int	ft_fill(char **farr, const char *src, int c)
{
	int		line;
	size_t	sub_len;

	line = 0;
	while (*src)
	{
		sub_len = 0;
		while (*src == c && *src)
			++src;
		while (*src != c && *src)
		{
			++sub_len;
			++src;
		}
		if (sub_len)
		{
			if (safe_reserv(farr, line, sub_len + 1))
				return (1);
			ft_strlcpy(farr[line], src - sub_len, sub_len + 1);
		}
		++line;
	}
	return (0);
}

char	**ft_split(char const *src, char c)
{
	size_t		arrlen;
	char		**farr;

	if (NULL == src)
		return (NULL);
	arrlen = ft_arrlen(src, c);
	farr = malloc((arrlen +1) * sizeof(char *));
	if (NULL == farr)
		return (NULL);
	farr[arrlen] = NULL;
	if (ft_fill (farr, src, c))
		return (NULL);
	return (farr);
}
