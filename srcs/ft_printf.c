/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchamorr <jchamorr@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:52:20 by jchamorr          #+#    #+#             */
/*   Updated: 2022/01/31 12:42:23 by jchamorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_find_the_perc(va_list st, char c, int i)
{
	if (c == 'c')
		i += ft_putchar(va_arg(st, int));
	else if (c == 's')
		i += ft_putstr(va_arg(st, char *));
	else if (c == '%')
		i += ft_putchar('%');
	else if (c == 'd' | c == 'i')
		i += ft_putnbr(va_arg(st, int));
	else if (c == 'u')
		i += ft_unsigned(va_arg(st, unsigned int));
	else if (c == 'p')
		i += ft_putstr("0x") + ft_hexapower(va_arg(st, size_t), c);
	else if (c == 'x' | c == 'X')
		i += ft_hexapower(va_arg(st, unsigned int), c);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	st;
	int		i;

	i = 0;
	va_start(st, format);
	while (*format)
	{
		if (*format == '%')
			i = ft_find_the_perc(st, *++format, i);
		else
			i += ft_putchar(*format);
		format++;
	}
	va_end(st);
	return (i);
}
