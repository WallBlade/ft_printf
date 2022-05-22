/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:03:39 by zel-kass          #+#    #+#             */
/*   Updated: 2022/05/20 15:35:31 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

size_t	ft_s(const char *str);
size_t	ft_x(unsigned int n, char c);
size_t	ft_d(long n);
size_t	ft_p(unsigned long long int n);
size_t	ft_u(unsigned int n);
int		ft_printf(const char *str, ...);
size_t	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putunbr(unsigned int n);
void	ft_print_lower_x(unsigned long long int n);
void	ft_print_upper_x(unsigned long long int n);
size_t	ft_numlen(long nb);
size_t	ft_hexa_len(unsigned long long int n);
size_t	ft_strlen(const char *s);

#endif