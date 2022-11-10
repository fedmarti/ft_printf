/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fedmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:20:00 by fedmarti          #+#    #+#             */
/*   Updated: 2022/11/09 21:10:37 by fedmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int	ft_putstr(char *str);
int	ft_printf(const char *str, ...);
int	print_arg(va_list args, char flag);
int	ft_putchar(char c);
int	ft_put_p(void *p);
int	ft_put_u(unsigned int n);
int	ft_puthex(size_t n, char flag);
int	ft_put_d(int n);

#endif
