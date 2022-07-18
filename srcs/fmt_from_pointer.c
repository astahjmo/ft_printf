/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_from_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:05:31 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 16:32:05 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <unistd.h>

int	fmt_from_pointer(void *pointer)
{
	u_long	pp;
	size_t	len;
	char	*str;


	pp = (unsigned long) pointer;
	if (!(pp))
	{
		ft_putstr_fd("(nil)", STDOUT_FILENO);
		return (5);
	}
	str = ft_ubase(pp, 16);
	len = ft_strlen(str);
	ft_putstr_fd("0x", STDOUT_FILENO);
	ft_putstr_fd(str, STDOUT_FILENO);
	free(str);
	return (len + 2);
}
