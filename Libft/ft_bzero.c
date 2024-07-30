/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:14:12 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:40:07 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Fill of 0 n positions on a memory
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
