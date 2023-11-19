/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:31:04 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/19 11:53:40 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_low(size_t nbr , int *size)
{
	char	*p;

	p = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar(p[nbr], size);
	else 
	{
		ft_puthex_low(nbr / 16, size);
		ft_putchar(p[nbr % 16], size);
	}
}