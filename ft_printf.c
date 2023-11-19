/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zqouri <zqouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 01:59:00 by zqouri            #+#    #+#             */
/*   Updated: 2023/11/19 14:12:58 by zqouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_next_char(char c, va_list args, int *size)
{
	if(!c)
		return;
	if (c == 'c')
		ft_putchar(va_arg(args, int), size);
	else if ( c == 's'){
		//printf("[%c]\n",c);
		ft_putstr(va_arg(args,char *),size);
	}
	else if (c == 'd')
		ft_putnbr(va_arg(args, int), size);
	else if (c == 'i')
		ft_putnbr(va_arg(args, int), size);
	else if (c == 'u')
		ft_putnbrpos(va_arg(args, int), size);
	else if (c == 'p')
		ft_putaddress(va_arg(args, void *), size);
	else if (c == 'x')
		ft_puthex_low(va_arg(args, size_t), size);
	else if (c == 'X')
		ft_puthex_upp(va_arg(args, size_t), size);
	else if (c == '%')
		ft_putchar('%', size);
	else
		ft_putchar(c, size);
}
int	ft_printf(const char *s, ...)
{
	size_t	i;
	int		size;
	va_list	args;
	
	//if (!s)
	//	return (-1);
	i = 0;
	size = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%' && s[++i] != '\0')
		{
			i++;
			ft_next_char(s[i], args, &size);
		}
		else
		{
			ft_putchar(s[i], &size);
		}
		i++;
	}
	va_end(args);
	return (size);
}

int main(void)
{
	printf("%d\n",ft_printf("%"));
}