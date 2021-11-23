/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:59:22 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/23 23:07:17 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	*len += i;
}

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*len += 11;
	}
	else if (n < 10 && n >= 0)
	{
		ft_putchr(n + '0');
		*len += 1;
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10, len);
		ft_putchr(n % 10 + '0');
		*len += 1;
	}
	else
	{
		ft_putchr('-');
		ft_putnbr(n * -1, len);
		*len += 1;
	}
}

void	ft_putnbr_u(unsigned int n, int *len)
{
	if (n < 10 && n >= 0)
	{
		ft_putchr(n + '0');
		*len += 1;
	}
	else
	{
		ft_putnbr_u(n / 10, len);
		ft_putchr(n % 10 + '0');
		*len += 1;
	}
}
