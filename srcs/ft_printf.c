/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:02:11 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 22:03:26 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list		ap;
	int			len;

	if (!s)
		return (0);
	va_start(ap, s);
	len = parser(s, ap);
	va_end(ap);
	return (len);
}
