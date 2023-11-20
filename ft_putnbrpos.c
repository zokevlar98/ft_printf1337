/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrpos.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:09:17 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/20 20:05:35 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrpos(unsigned int num, int *size)
{
	//printf("num = %ld\n",num);
	if (num > 9)
	{
		ft_putnbrpos(num / 10 ,size);
		num = num % 10;
	}
	if (num >= 0 && num <= 9)
		ft_putchar(num + '0',size);
}