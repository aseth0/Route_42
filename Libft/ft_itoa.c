/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseth <aseth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:50:41 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/19 08:58:06 by aseth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_nbr(char *src, int nb)
{
	if (nb < 0)
	{
		*src = '-';
		src++;
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_nbr(src, (nb / 10));
		while (*src)
			src++;
		*src = (nb % 10) + '0';
	}
	if (*src < 10)
		*src = (nb % 10) + '0';
}

int	ft_cntlen(int nb)
{
	int	arrlen;

	arrlen = 0;
	if (nb < 0)
		arrlen++;
	while (nb)
	{
		nb = (nb / 10);
		arrlen++;
	}
	return (arrlen);
}

char	*ft_itoa(int n)
{
	int		arrlen;
	char	*nstr;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	arrlen = 0;
	arrlen = ft_cntlen(n);
	nstr = ft_calloc(sizeof(char), arrlen + 1);
	if (!nstr)
		return (NULL);
	ft_nbr(nstr, n);
	return (nstr);
}
