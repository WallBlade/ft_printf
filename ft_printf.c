/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:01:51 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/17 21:51:19 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

size_t	ft_print_args(const char c, va_list args)
{
	size_t	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar_fd(va_arg(args, int), 1);
	else if (c == 'd' || c == 'i')
		len += ft_putnbr_fd(va_arg(args, int), 1);
	else if (c == 's')
		len += ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'x' || c == 'X')
		len += ft_put_hexa(va_arg(args, unsigned int), c);
	else if (c == 'p')
	{
		write(1, "0x", 2);
		len += ft_print_addr(va_arg(args, unsigned long long int));
	}
	else if (c == 'u')
		len += ft_unputnbr_fd(va_arg(args, int), 1);
	else if(c == '%')
		len += ft_putchar_fd('%', 1);
	return (len);
}

int		ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list args;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			len += ft_print_args(str[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

int main()
{
    // char *manger = "Hello";
    // char *test = "four";
    // unsigned int nonsigne = 67;

    int resiii = printf("x = %x\n", 321668655);
    int res = ft_printf("x = %x\n", 321668655);

    printf("Orignal : %d, ft_printf : %d", resiii, res);

    return (0);
}
