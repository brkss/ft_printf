/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:59:22 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/22 00:52:09 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void ft_putstr(char *s)
{
	
	int	i;

	i = 0;
	while(s[i])
		write(1, &s[i++], 1);
}

void ft_putchr(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 10 && n >= 0)
	{
		ft_putchr(n + '0');
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchr(n % 10 + '0');
	}
	else
	{
		ft_putchr('-');
		ft_putnbr(n * -1);
	}
}
