/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabiti <atabiti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:08:27 by atabiti           #+#    #+#             */
/*   Updated: 2021/12/07 13:16:50 by atabiti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define   FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *s1, ...);
void	ft_putchar_fd(char c);
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s);
void	ft_putnbr_fd( int n);
void	ft_putnbr2(unsigned int n);
int		type(char s1, va_list holde);
int		character(va_list holde);
int		string(va_list holde);
int		numberd(va_list holde);
int		numberdu(va_list holde);
int		manynbr(long holde);
int		hexadi(va_list holde);
void	hexconverter(unsigned long n);
void	hexconverterlower(unsigned long n);
int		hexadilower(va_list holde);
int		manyhex(unsigned long holde);
int		pcase(va_list holde);

#endif
