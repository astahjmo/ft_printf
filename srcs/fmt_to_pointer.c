/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_to_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:05:31 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 16:32:05 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	fmt_to_pointer(void *pointer)
{
	u_long	aux_p;
	size_t	len;
	char	*str;

	aux_p = (unsigned long) pointer;
	if (!(aux_p))
	{
		ft_putstr_fd("(nil)", STDOUT_FILENO);
		return (5);
	}
	str = ft_ubase(aux_p, 16);
	len = ft_strlen(str);
	ft_putstr_fd("0x", STDOUT_FILENO);
	ft_putstr_fd(str, STDOUT_FILENO);
	free(str);
	return (len + 2);
}
