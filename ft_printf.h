/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 02:07:25 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/20 23:36:28 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(int c, int *size);
void	ft_putstr(char *s, int *size);
void	ft_putnbr(int num, int *size);
void	ft_putnbrpos(unsigned int num, int *size);
void	ft_putaddress(unsigned int *p, int *size);
void	ft_puthex_low(unsigned int nbr, int *size);
void	ft_puthex_upp(unsigned int nbr, int *size);

#endif