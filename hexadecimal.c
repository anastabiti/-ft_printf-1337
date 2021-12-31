/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 08:18:33 by atabiti           #+#    #+#             */
/*   Updated: 2021/12/08 09:00:51 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexadi(va_list holde)
{
	int	hex;

	hex = va_arg(holde, unsigned long);
	hexconverter((unsigned int)hex);
	return (manyhex((unsigned int)hex));
}

int	hexadilower(va_list holde)
{
	int	hex;

	hex = va_arg(holde, unsigned int);
	hexconverterlower((unsigned int)hex);
	return (manyhex((unsigned int)hex));
}
