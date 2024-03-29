/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos <johmatos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 00:07:26 by johmatos          #+#    #+#             */
/*   Updated: 2022/11/10 23:23:41 by johmatos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	handler_parms(char spec, va_list ap)
{
	if (spec == 's')
		return (fmt_to_string(va_arg(ap, char *)));
	else if (spec == 'p')
		return (fmt_to_pointer(va_arg(ap, void *)));
	else if (spec == 'x')
		return (fmt_to_hex(va_arg(ap, int), 0));
	else if (spec == 'X')
		return (fmt_to_hex(va_arg(ap, int), 1));
	else if (spec == 'u')
		return (fmt_to_udecimal(va_arg(ap, unsigned int)));
	else if (spec == 'i')
		return (fmt_to_decimal(va_arg(ap, int)));
	else if (spec == 'd')
		return (fmt_to_decimal(va_arg(ap, int)));
	else if (spec == 'c')
		return (fmt_to_char(va_arg(ap, int)));
	else if (spec == 'b')
		return (fmt_to_bin(va_arg(ap, int)));
	return (0);
}

int	parser(const char *s, va_list ap)
{
	int		index;
	int		len;

	len = 0;
	index = -1;
	while (s[++index])
	{
		if (s[index] == '%' && ft_strchr(MASK_CONVERSION, s[index + 1]))
		{
			len += handler_parms(s[index + 1], ap);
			index++;
			continue ;
		}
		else if (s[index] == '%' && s[index + 1] == '%')
			ft_putchar_fd(s[index++], STDOUT_FILENO);
		else
			ft_putchar_fd(s[index], STDOUT_FILENO);
		len++;
	}
	return (len);
}
