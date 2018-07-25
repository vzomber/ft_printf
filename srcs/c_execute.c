/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_execute.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzomber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 16:31:14 by vzomber           #+#    #+#             */
/*   Updated: 2018/07/16 16:31:16 by vzomber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		c_execute(t_opt *flags, va_list ap)
{
	char	c;
	int		len;
	char	ch;

	len = 1;
	ch = flags->zero ? '0' : ' ';
	c = va_arg(ap, int);
	if (flags->width)
	{
		if (flags->minus)
		{
			write(1, &c, 1);
			ft_loop(flags->width - 1, ch);
			return (flags->width);
		}
		else
			 len += ft_loop(flags->width - 1, ch);
	}
	write(1, &c, 1);
	return (len);
}

int		bc_execute(va_list ap)
{
	int	c;
	int	len;

	setlocale(LC_ALL, "");
	c = va_arg(ap, int);
	len = put_wchar(c);
	return (len);
}