/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:22:00 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:42:15 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Put a char passed as integer in a mayus char (in integger)
*/
int	ft_toupper(int c)
{
	if (c >= 0b1100001 && c <= 0b1111010)
		return (c & 95);
	return (c);
}
