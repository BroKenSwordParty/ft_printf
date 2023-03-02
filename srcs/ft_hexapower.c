/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexapower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchamorr <jchamorr@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:37:15 by jchamorr          #+#    #+#             */
/*   Updated: 2022/01/31 12:40:46 by jchamorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_hexapower(size_t n, char c)
{
	int	i;

	i = 0;
	if (c == 'x' || c == 'p')
	{
		if (n >= 16)
			i += ft_hexapower((n / 16), c);
		i += ft_putchar(BASE_16MIN[n % 16]);
		return (i);
	}
	if (c == 'X')
	{
		if (n >= 16)
			i += ft_hexapower((n / 16), c);
		i += ft_putchar(BASE_16MAY[n % 16]);
		return (i);
	}
	return (0);
}
