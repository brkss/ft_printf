/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:43:58 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/21 23:36:39 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h" 

int	check_arg(char c)
{
	char	*s;
	int		i;

	i = 0;
	s = "cspdiuxX%";
	while(s[i])
	{
		if(s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	arg_count(char *s)
{
	int	l;
	int	i;

	l = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] == '%' && s[i + 1] && check_arg(s[i + 1]))
			l++;
		i++;
	}
	return(l);
}

char *parse(char *s)
{
	int		i;
	int		count;
	char	*args;
	int		j;

	count = arg_count(s);
	if(count == 0)
		return (NULL);
	args = (char *)malloc(sizeof(char) * count + 1);
	if(!args)
		return (NULL);
	i = 0;
	j = 0;
	while(s[i])
	{
		if(s[i] == '%' && s[i + 1] && check_arg(s[i + 1]))
			args[j++] = s[i + 1];	
		i++;
	}
	args[j] = '\0';
	return (args);
}

int	ft_printf(char *s, ...)
{
	int		r;
	va_list ap;
	int		i;
	int		count;
	char	*types;
	int		j;

	j = 0;
	i = 0;
	r = 0;
	count = arg_count(s);
	types = parse(s);
	va_start(ap, s);
	while(s[i])
	{
		if(s[i] == '%' && s[i + 1] && check_arg(s[i + 1]))
		{
			
			if(types[j] == 's')
				ft_putstr(va_arg(ap, char *));
			
			else
				ft_putstr("unknown type !");
			i++;
			j++;
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	va_end(ap);
	return (r);	
}
