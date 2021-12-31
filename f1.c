/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f1.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:28:42 by atabiti           #+#    #+#             */
/*   Updated: 2021/12/07 13:06:31 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pcase(va_list holde)
{
	void	*t;

	t = va_arg(holde, void *);
	ft_putstr_fd("0x");
	hexconverterlower((unsigned long) t);
	return (manyhex((unsigned long )t) + 2);
}

int	character(va_list holde)
{
	char	r;

	r = va_arg(holde, int);
	ft_putchar_fd(r);
	return (1);
}

int	string(va_list holde)
{
	char	*s;

	s = va_arg(holde, char *);
	if (s == NULL)
		s = "(null)";
	ft_putstr_fd(s);
	return (ft_strlen(s));
}

int	numberd(va_list holde)
{
	int	a;

	a = va_arg(holde, int);
	ft_putnbr_fd(a);
	return (manynbr(a));
}

int	numberdu(va_list holde)
{
	int	d;

	d = va_arg(holde, unsigned int);
	ft_putnbr2(d);
	return (manynbr((unsigned int)d));
}
