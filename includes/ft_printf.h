/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:03:39 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/17 21:10:26 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#	define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int		ft_printf(const char *str, ...);
size_t	ft_putchar_fd(char c, int fd);
size_t	ft_putnbr_fd(int n, int fd);
size_t	ft_putstr_fd(const char *s, int fd);
size_t	ft_put_hexa(unsigned int i, unsigned char c);
size_t	ft_unputnbr_fd(unsigned int n, int fd);
size_t	ft_print_addr(unsigned long long int n);
size_t	ft_numlen(long nb);

#endif