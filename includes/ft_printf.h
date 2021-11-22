/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:43:02 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/22 13:16:43 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft/libft.h"

void	ft_putnbr(int n);
void	ft_converthex(int nb, int maj);
void	ft_putpointer(unsigned long n);

int		arg_count(char *s);
int 	ft_printf(char *s, ...);
int		check_arg(char c);
char	*parse(char *s);
void	ft_putstr(char *s);
void	ft_putchr(char c);
void	ft_putnbr_u(unsigned int n);

#endif
