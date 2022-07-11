/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:41:38 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 17:39:03 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <unistd.h>

static char	*handler_parms(char spec, va_list ap)
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
	return (0);
}

int	parser(const char *s, va_list ap)
{
	int		index;
	char	*parm;

	index = -1;
	while (s[++index])
	{
		if (s[index] == '%' && ft_strchr(MASK_CONVERSION, s[index + 1]))
		{
			parm = handler_parms(s[index +1], ap);
			ft_putstr_fd(parm, STDOUT_FILENO);
			free(parm);
			index++;
		}
		else if (s[index] == '%' && s[index++] == 'c')
			ft_putchar_fd(s[index], STDOUT_FILENO);
		else
			ft_putchar_fd(s[index], STDOUT_FILENO);
	}
	return (index);
}
