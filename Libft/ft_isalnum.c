/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucabanil <ucabanil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:03:48 by ucabanil          #+#    #+#             */
/*   Updated: 2023/12/10 01:37:53 by ucabanil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 @brief Return if the integer is an number or alpha in ascii table
*/
int	ft_isalnum(int nbr)
{
	int	fvalue;

	fvalue = 0;
	if ((ft_isdigit(nbr)) || (ft_isalpha(nbr)))
		fvalue = 8;
	return (fvalue);
}
