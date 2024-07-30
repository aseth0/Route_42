/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:24:52 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:37:25 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 @brief Return if the integer is an number in ascii table
*/
int	ft_isdigit(int nbr)
{
	return (nbr >= '0' && nbr <= '9');
}
