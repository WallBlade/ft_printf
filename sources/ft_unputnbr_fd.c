/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:45:35 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/17 21:21:23 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

size_t	ft_unputnbr_fd(unsigned int n, int fd)
{
	size_t	len;
	unsigned int n_cpy;

	n_cpy = n;
	len = ft_numlen(n_cpy);
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
	return (len);
}
