/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:42:23 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/23 22:07:46 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{

	int a = 0;
	ft_putnbr(900, &a);
	printf("a => %d \n", a);

	printf("parsed -> %s \n", parse("%%%%%%%d"));

	printf("\nog : \n");
	//printf("%%%c", 'A');
	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\nft : \n");
	//ft_printf("%%%c", 'A');
	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);


	//char *s = "hello";
	//int ca =    printf("printing pointers => %s \n", NULL);
	//int cb = ft_printf("printing pointers => %s	\n", NULL);
	//ft_printf("og => %d \n", ca);
	//ft_printf("ft => %d \n", cb);
	
	//ft_printf("%%this%dis how it works %s %d %c = %c ", 99, "hello world", 15, 'z', 'Z');
	//ft_printf("unsigned int = %u ", 4294967295);
	
	//ft_printf("ft hex => %x \n", 1294967295);
	//printf("og hex => %x \n", 1294967295);
	
	//ft_putstr("hello world \n");
	//printf("=> %s \n", parse("%h %u ello %% this %%%ifirst arg %s %r %d %x %X"));
	//printf("%%%d", 10);
	//printf("%%d", 10);
	//printf("%d", 10);
	return (0);
}
