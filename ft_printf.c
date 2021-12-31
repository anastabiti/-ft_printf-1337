/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:44:46 by atabiti           #+#    #+#             */
/*   Updated: 2021/12/07 14:47:19 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s1, ...)
{
	va_list	holde;
	int		i;
	int		index;

	i = 0;
	index = 0;
	va_start(holde, s1);
	while (s1[i])
	{			
		if (s1[i] == '%')
		{
			index = index + type(s1[i + 1], holde);
			i++;
		}
		else
		{
			ft_putchar_fd(s1[i]);
			index++;
		}
		i++;
	}
	va_end(holde);
	return (index);
}
