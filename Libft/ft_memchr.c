/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseth <aseth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 00:09:27 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/24 12:14:09 by aseth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Find the first occurence of a c (as char) in a string
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ms;

	ms = (unsigned char *)s;
	while (n > 0)
	{
		if (*ms == (unsigned char)c)
			return (ms);
		ms++;
		n--;
	}
	return (NULL);
}

/* int	main(void)
{
	printf("La cadena: %s", ft_memchr("Hola joder", 'r', 3));
	return (0);
} */
