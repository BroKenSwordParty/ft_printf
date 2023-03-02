/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchamorr <jchamorr@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:11:50 by jchamorr          #+#    #+#             */
/*   Updated: 2022/01/31 13:12:38 by jchamorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_unsigned(unsigned int n2)
{
	int	len2;

	len2 = 0;
	if (n2 > 9)
		len2 += ft_unsigned(n2 / 10);
	len2 += ft_putchar((n2 % 10) + 48);
	return (len2);
}
