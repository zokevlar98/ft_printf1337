/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:31:08 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/20 23:39:32 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_upp(unsigned int nbr, int *size)
{
	char	*p;

	p = "0123456789ABCDEF";
	if (nbr < 16)
		ft_putchar(p[nbr], size);
	else
	{
		ft_puthex_upp((nbr / 16), size);
		ft_putchar(p[nbr % 16], size);
	}
}
