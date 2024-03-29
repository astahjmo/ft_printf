/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_to_bin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:49:19 by johmatos          #+#    #+#             */
/*   Updated: 2022/11/10 23:34:03 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	fmt_to_bin(int value)
{
	u_long	len;

	len = 0;
	if (!(value))
	{
		ft_putstr_fd("(nil)", STDOUT_FILENO);
		return (5);
	}
	while (len < 8)
	{
		if (value & 1)
			ft_putchar_fd('1', STDOUT_FILENO);
		else
			ft_putchar_fd('0', STDOUT_FILENO);
		len++;
		value >>= 1;
	}
	return (1);
}
