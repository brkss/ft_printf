/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 19:43:58 by bberkass          #+#    #+#             */
/*   Updated: 2021/11/24 00:17:46 by bberkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	check_arg(char c)
{
	char	*s;
	int		i;

	i = 0;
	s = "cspdiuxX%";
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	arg_count(const char *s)
{
	int	l;
	int	i;

	l = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] && check_arg(s[i + 1]))
			l++;
		i++;
	}
	return (l);
}

char	*parse(const char *s)
{
	int		i;
	int		count;
	char	*args;
	int		j;

	count = arg_count(s);
	if (count == 0)
		return (NULL);
	args = (char *)malloc(sizeof(char) * count + 1);
	if (!args)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] && check_arg(s[i + 1]))
			args[j++] = s[i + 1];
		if (s[i + 1] && s[i] == '%' && s[i + 1] == '%')
			i++;
		i++;
	}
	args[j] = '\0';
	return (args);
}

void	ft_handle_targets(va_list ap, char *types, int j, int *r)
{
	if (types[j] == 's')
		ft_putstr(va_arg(ap, char *), r);
	else if (types[j] == 'd')
		ft_putnbr(va_arg(ap, int), r);
	else if (types[j] == 'p')
		ft_putpointer(va_arg(ap, int64_t), r);
	else if (types[j] == 'i')
		ft_putnbr(va_arg(ap, int), r);
	else if (types[j] == 'u')
		ft_putnbr_u(va_arg(ap, unsigned int), r);
	else if (types[j] == 'c')
	{
		ft_putchr(va_arg(ap, int));
		*r += 1;
	}
	else if (types[j] == 'X')
		ft_converthex(va_arg(ap, int), 1, r);
	else if (types[j] == 'x')
		ft_converthex(va_arg(ap, int), 0, r);
	else if (types[j] == '%')
	{
		ft_putchr('%');
		*r += 1;
	}
}

int	ft_printf(const char *s, ...)
{
	int		r;
	va_list	ap;
	int		i;
	char	*types;
	int		j;

	j = 0;
	i = 0;
	r = 0;
	types = parse(s);
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1] && check_arg(s[i + 1]))
		{
			ft_handle_targets(ap, types, j++, &r);
			i++;
		}
		else
			r += write(1, &s[i], 1);
		i++;
	}
	va_end(ap);
	free(types);
	return (r);
}
