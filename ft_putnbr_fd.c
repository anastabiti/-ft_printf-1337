/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:30:25 by atabiti           #+#    #+#             */
/*   Updated: 2021/12/07 14:44:19 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd( int n)
{
	unsigned int	a;

	a = n;
	if (n < 0)
	{
		ft_putchar_fd('-');
		a = -a;
	}
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10);
		ft_putnbr_fd(a % 10);
	}
	if (a <= 9)
	{
		ft_putchar_fd(a + 48);
	}
}
