/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:48:27 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/18 16:22:50 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putunbr(n / 10);
		ft_putunbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_putunbr(unsigned int n)
{
	if (n > 9)
	{
		ft_putunbr(n / 10);
		ft_putunbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_print_x(unsigned long long int n)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	while (n >= 16)
	{
		ft_print_x(n / 16);
		n = n % 16;
	}
	ft_putchar(hexa[n]);
}

void	ft_print_X(unsigned long long int n)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	while (n >= 16)
	{
		ft_print_X(n / 16);
		n = n % 16;
	}
	ft_putchar(hexa[n]);
}