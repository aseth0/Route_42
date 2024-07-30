/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:57:29 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:37:40 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 @brief Return if the integer is alpha in ascii table
*/
int	ft_isalpha(int nbr)
{
	int	fvalue;

	fvalue = 0;
	if ((nbr >= 'a' && nbr <= 'z')
		|| (nbr >= 'A' && nbr <= 'Z'))
		fvalue = 1024;
	return (fvalue);
}
