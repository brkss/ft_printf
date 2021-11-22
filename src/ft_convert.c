/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 01:20:12 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/22 13:30:10 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_converthex(int nb, int maj)
{
	char	*t;
	unsigned int n;

	n = nb;
	if(maj)
		t = "0123456789ABCDEF";
	else
		t = "0123456789abcdef";
	
	if(n < 16)
	{
		ft_putchr(t[n]);
	}
	else
	{
		ft_converthex(n / 16, maj);
		ft_putchr(t[n%16]);
	}
}
void	ft_printpointer(unsigned long n, char *dect)
{
	if(n < 16)
	{
		ft_putchr(dect[n]);
	}
	else
	{
		ft_printpointer(n / 16, dect);
		ft_putchr(dect[n%16]);
	}
}

void	ft_putpointer(unsigned long n)
{
	char	*t;
	
	t = "0123456789abcdef";
	ft_putchr('0');
	ft_putchr('x');
	ft_printpointer(n, t);
}


