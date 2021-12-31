/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexconverter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:23:46 by atabiti           #+#    #+#             */
/*   Updated: 2021/12/07 11:28:01 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hexconverter(unsigned long n)
{
	if (n >= 16)
	{
		hexconverter(n / 16);
		hexconverter(n % 16);
	}
	if (n <= 9)
	{
		ft_putchar_fd(n + 48);
	}
	if (n >= 10 && n < 16)
	{
		ft_putchar_fd(n + 55);
	}
}

void	hexconverterlower(unsigned long n)
{
	if (n >= 16)
	{
		hexconverterlower(n / 16);
		hexconverterlower(n % 16);
	}
	if (n <= 9)
	{
		ft_putchar_fd(n + 48);
	}
	if (n >= 10 && n < 16)
	{
		ft_putchar_fd(n + 87);
	}
}
