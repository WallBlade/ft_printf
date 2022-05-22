/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:42:21 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/18 12:04:19 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_s(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

size_t	ft_x(unsigned int n, char c)
{
	if (c == 'x')
		ft_print_lower_x(n);
	else if (c == 'X')
		ft_print_upper_x(n);
	return (ft_hexa_len(n));
}

size_t	ft_d(long n)
{
	ft_putnbr(n);
	return (ft_numlen(n));
}

size_t	ft_p(unsigned long long int n)
{
	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	ft_print_lower_x(n);
	return (ft_hexa_len(n) + 2);
}

size_t	ft_u(unsigned int n)
{
	ft_putunbr(n);
	return (ft_numlen(n));
}
