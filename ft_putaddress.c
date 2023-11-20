/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:22:37 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/20 23:37:49 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(size_t nbr, int *size)
{
	char	*p;

	p = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar(p[nbr], size);
	else 
	{
		ft_puthex(nbr / 16, size);
		ft_putchar(p[nbr % 16], size);
	}
}

void	ft_putaddress(unsigned int*p, int *size)
{
	if (p == NULL)
		ft_putstr("0x0", size);
	else
	{
		ft_putstr("0x", size);
		ft_puthex((size_t)p, size);
	}
}
