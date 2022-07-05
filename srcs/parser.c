/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 21:41:38 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/04 22:37:04 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static char	*handler_parms(char spec, va_list ap)
{
	if (spec == 's')
		return (fmt_from_string(va_arg(ap, char *)));
	else if (spec == 's')
		return (fmt_from_string(va_arg(ap, char *)));
	else if (spec == 's')
		return (fmt_from_string(va_arg(ap, char *)));
	else if (spec == 's')
		return (fmt_from_string(va_arg(ap, char *)));
	else if (spec == 's')
		return (fmt_from_string(va_arg(ap, char *)));
	else if (spec == 's')
		return (fmt_from_string(va_arg(ap, char *)));
	return (0);
}

static int	count_args(const char *s)
{
	int	count;
	int	parms;

	count = 0;
	parms = 0;
	while (s[count])
	{
		if (s[count] && s[count] == '%'
			&& ft_strchr(MASK_CONVERSION, s[count +1]))
			parms++;
		count++;
	}
	return (parms);
}

char	*parser(const char *s, va_list ap)
{
	int		count;
	int		parms;
	char	**arr;

	parms = count_args(s);
	arr = malloc((parms + 1) * sizeof(char *));
	arr[parms] = NULL;
	count = 0;
	parms = 0;
	while (s[count])
	{
		if (s[count] && s[count] == '%'
			&& ft_strchr(MASK_CONVERSION, s[count +1]))
		{
			arr[parms] = handler_parms(s[count + 1], ap);
			parms++;
		}
		count++;
	}
	return (0);
}
