/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:10:22 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/18 15:10:17 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t     ft_numlen(long nb)
{
	long    size;

	size = 0;
	if (nb == 0)
		size++;
	if (nb < 0)
	{
		nb *= -1;
		size++;
	}
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

size_t		ft_hexa_len(unsigned long long int n)
{
	size_t	len;

	len = (n == 0);
	while (n)
	{
		n /= 16;
		len ++;
	}
	return (len);
}

size_t  ft_strlen(const char *s)
{
	unsigned int    i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}