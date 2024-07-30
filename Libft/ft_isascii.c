/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:32:01 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:38:05 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 @brief Return if the integer is in the ascii table
*/
int	ft_isascii(int nbr)
{
	return (nbr >= 0 && nbr <= 127);
}
