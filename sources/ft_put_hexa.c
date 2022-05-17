/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:25:02 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/17 21:43:48 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_put_hexa(unsigned int n, unsigned char c)
{
	char	*hexa1;
	char	*hexa2;

	hexa1 = "0123456789abcdef";
	hexa2 = "0123456789ABCDEF";
	if (c == 'x')
	{
		if (n >= 16)
		{
			ft_put_hexa(n / 16, c);
			ft_put_hexa(n % 16, c);
		}
		else
			ft_putchar_fd(hexa1[n], 1);
	}
	if (c == 'X')
	{
		if (n >= 16)
		{
			ft_put_hexa(n / 16, c);
			ft_put_hexa(n % 16, c);
		}
		else
			ft_putchar_fd(hexa2[n], 1);
	}
	return (1);
}