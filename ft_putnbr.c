/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:43:29 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/20 19:15:08 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *size)
{
	if (num == -2147483648)
	{
		ft_putchar('-', size);
		ft_putstr("2147483648",size);
	}
	else if (num < 0)
	{
		ft_putchar('-',size);
		num = num * (-1);
	}
	if (num > 9)
	{
		ft_putnbr(num / 10 ,size);
		num = num % 10;
	}
	if (num >= 0 && num <= 9)
	{
		ft_putchar(num + '0',size);
	}
}