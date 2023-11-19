/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:31:08 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/19 11:10:55 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_upp(size_t nbr, int *size)
{
	char	*p;

	p = "0123456789ABCDEF";
	
	if (nbr < 16)
		ft_putchar((char)(p + nbr), size);
	else
	{
		ft_puthex_low((nbr / 16), size);
		ft_putchar((char)(p + (nbr % 16)) , size);
	}
}