/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 10:08:12 by atabiti           #+#    #+#             */
/*   Updated: 2021/12/07 09:55:42 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	type(char s1, va_list holde)
{
	int	i;

	i = 0;
	if (s1 == '%')
	{
		ft_putchar_fd('%');
		return (1);
	}
	if (s1 == 'p')
		i = pcase(holde);
	else if (s1 == 'c')
		i = character(holde);
	else if (s1 == 's')
		i = string(holde);
	else if (s1 == 'd' || s1 == 'i')
		i = numberd(holde);
	else if (s1 == 'u')
		i = numberdu(holde);
	else if (s1 == 'x')
		i = hexadilower(holde);
	else if (s1 == 'X')
		i = hexadi(holde);
	return (i);
}
