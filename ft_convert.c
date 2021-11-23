/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 01:20:12 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/23 23:06:11 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_converthex(int nb, int maj, int *len)
{
	char			*t;
	unsigned int	n;

	n = nb;
	if (maj)
		t = "0123456789ABCDEF";
	else
		t = "0123456789abcdef";
	if (n < 16)
	{
		ft_putchr(t[n]);
		*len += 1;
	}
	else
	{
		ft_converthex(n / 16, maj, len);
		ft_putchr(t[n % 16]);
		*len += 1;
	}
}

void	ft_printpointer(unsigned long n, char *dect, int *len)
{
	if (n < 16)
	{
		ft_putchr(dect[n]);
		*len += 1;
	}
	else
	{
		ft_printpointer(n / 16, dect, len);
		ft_putchr(dect[n % 16]);
		*len += 1;
	}
}

void	ft_putpointer(unsigned long n, int *len)
{
	char	*t;

	t = "0123456789abcdef";
	ft_putchr('0');
	ft_putchr('x');
	*len += 2;
	ft_printpointer(n, t, len);
}
