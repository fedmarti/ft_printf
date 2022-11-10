/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:15:00 by fedmarti          #+#    #+#             */
/*   Updated: 2022/11/09 21:12:33 by fedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_arg(va_list args, char flag)
{
	if (flag == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (flag == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (flag == 'p')
		return (ft_put_p(va_arg(args, void *)));
	else if (flag == 'd' || flag == 'i')
		return (ft_put_d(va_arg(args, int)));
	else if (flag == 'u')
		return (ft_put_u(va_arg(args, unsigned int)));
	else if (flag == 'x' || flag == 'X')
		return (ft_puthex(va_arg(args, unsigned int), flag));
	else if (flag == '%')
		return (ft_putchar(flag));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
			len++;
		}
		else
		{
			len += print_arg(args, str[1]);
			str++;
		}
		str++;
	}
	va_end(args);
	return (len);
}
