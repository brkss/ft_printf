/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:42:23 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/22 13:18:23 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main()
{

	char *s = "hello";
	printf("printing pointers => %p \n", s);
	ft_printf("printing pointers => %p \n", s);
	
	//ft_printf("%%this%dis how it works %s %d %c = %c ", 99, "hello world", 15, 'z', 'Z');
	//ft_printf("unsigned int = %u ", 4294967295);
	ft_printf("ft hex => %x \n", 1294967295);
	printf("og hex => %x \n", 1294967295);
	//ft_putstr("hello world \n");
	//printf("=> %s \n", parse("%h %u ello %% this %%%ifirst arg %s %r %d %x %X"));
	//printf("%%%d", 10);
	//printf("%%d", 10);
	//printf("%d", 10);
	return (0);
}


