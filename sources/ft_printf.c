/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:01:51 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/22 18:06:24 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_print_args(const char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 'd' || c == 'i')
		return (ft_d(va_arg(args, int)));
	else if (c == 's')
		return (ft_s(va_arg(args, char *)));
	else if (c == 'x' || c == 'X')
		return (ft_x(va_arg(args, unsigned long long int), c));
	else if (c == 'p')
		return (ft_p(va_arg(args, unsigned long long int)));
	else if (c == 'u')
		return (ft_u(va_arg(args, int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			len += ft_print_args(str[i + 1], args);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
