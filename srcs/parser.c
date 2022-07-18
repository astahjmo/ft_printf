/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:41:38 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/12 18:28:26 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	handler_parms(char spec, va_list ap)
{
	if (spec == 's')
		return (fmt_from_string(va_arg(ap, char *)));
	else if (spec == 'p')
		return (fmt_from_pointer(va_arg(ap, void *)));
	else if (spec == 'x')
		return (fmt_from_lhex(va_arg(ap, int)));
	else if (spec == 'X')
		return (fmt_from_uhex(va_arg(ap, int)));
	else if (spec == 'u')
		return (fmt_from_udecimal(va_arg(ap, unsigned int)));
	else if (spec == 'i')
		return (fmt_from_decimal(va_arg(ap, int)));
	else if (spec == 'd')
		return (fmt_from_decimal(va_arg(ap, int)));
	else if (spec == 'c')
		return (fmt_from_char(va_arg(ap, int)));
	return (0);
}

int	parser(const char *s, va_list ap)
{
	int		index;
	int		len;

	index = -1;
	len = 0;
	while (s[++index])
	{
		if (s[index] == '%' && ft_strchr(MASK_CONVERSION,s[index + 1]))
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
