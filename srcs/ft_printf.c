/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:02:11 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/04 22:28:17 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list		ap;
	char		*fmtd;

	if (!s)
		return (0);
	va_start(ap, s);
	fmtd = parser(s, ap);
	va_end(ap);
	return (0);
}
