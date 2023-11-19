/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 02:07:25 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/19 11:42:07 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(int c, int *size);
void	ft_putstr(char *s, int *size);
void	ft_putnbr(int num, int *size);
void	ft_putnbrpos(size_t num, int *size);
void	ft_putaddress(void *p, int *size);
void	ft_puthex_low(size_t nbr , int *size);
void	ft_puthex_upp(size_t nbr, int *size);

#endif