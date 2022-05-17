/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 15:02:09 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/17 17:16:38 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_print_addr(unsigned long long int n)
{
	size_t	len;
	unsigned long long int n_cpy;
	char	*hexa;

	n_cpy = n;
	len = 0;
	hexa = "0123456789abcdef";
	while (n_cpy >= 16)
	{
		n_cpy = n_cpy / 16;
		len++;
	}
	while (n >= 16)
	{
		ft_print_addr(n / 16);
		n = n % 16;
	}
	ft_putchar_fd(hexa[n], 1);
	return (len + 2);
}
