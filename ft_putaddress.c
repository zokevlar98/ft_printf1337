/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:22:37 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/19 11:54:37 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddress(void *p, int *size)
{
	
	if (p == NULL)
		ft_putstr("0x0",size);
	else
	{
		ft_putstr("0x",size);
		ft_puthex_low((size_t)p , size);
	}
}