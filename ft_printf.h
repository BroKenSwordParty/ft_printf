/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchamorr <jchamorr@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:24:24 by jchamorr          #+#    #+#             */
/*   Updated: 2022/01/31 12:36:30 by jchamorr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <limits.h>
# include <stddef.h>
# include  <unistd.h>

# define    BASE_16MIN "0123456789abcdef"
# define    BASE_16MAY "0123456789ABCDEF"

int		ft_printf(const char *format, ...);
int		ft_find_the_perc(va_list st, char c, int i);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_unsigned(unsigned int n);
int		ft_hexapower(size_t n, char c);
size_t	ft_strlen(char *str);

#endif
