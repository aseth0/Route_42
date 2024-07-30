/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:52:30 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:38:20 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 @brief Return if the integer is printable
 */
int	ft_isprint(int nbr)
{
	return (nbr > 31 && nbr < 127);
}
