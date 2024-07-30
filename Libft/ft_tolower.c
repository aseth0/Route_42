/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:29:48 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:42:40 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Put a char passed as integer in a lower char (in integger)
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c | 0b0100000);
	return (c);
}
