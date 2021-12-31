/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manynbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:11:06 by atabiti           #+#    #+#             */
/*   Updated: 2021/12/08 08:37:57 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	manynbr(long holde)
{
	int	i;

	i = 0;
	if (holde <= 0)
	{
		holde = -holde;
		i++;
	}
	while (holde > 0)
	{
		holde = holde / 10 ;
		i++;
	}
	return (i);
}

int	manyhex(unsigned long holde)
{
	int	i;

	i = 0;
	if (holde == 0)
	{
		return (1);
	}
	while (holde > 0)
	{
		holde = holde / 16;
		i++;
	}
	return (i);
}
