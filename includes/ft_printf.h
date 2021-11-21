/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:43:02 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/22 00:09:15 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft/libft.h"

char    *ft_itoa(int n);
char	*ft_strdup(const char *s1);

int		arg_count(char *s);
int 	ft_printf(char *s, ...);
int		check_arg(char c);
char	*parse(char *s);
void	ft_putstr(char *s);
void	ft_putchr(char c);

#endif
