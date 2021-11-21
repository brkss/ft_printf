/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:42:23 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/22 00:13:05 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main()
{

	ft_printf("%%this%dis how it works %s %d %c = %c ", 99, "hello world", 15, 'z', 'Z');
	//ft_putstr("hello world \n");
	//printf("=> %s \n", parse("%h ello this first arg %s %r %d %x %X"));
	return (0);
}
