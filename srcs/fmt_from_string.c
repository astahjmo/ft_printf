/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_from_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:23:56 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 16:36:26 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"
#include <unistd.h>

int	fmt_from_string(char *s)
{
	int		len;

	if(!s)
	{
		ft_putstr_fd("(null)", STDOUT_FILENO);
		return (6);
	}
	len = ft_strlen(s);
	ft_putstr_fd(s, STDOUT_FILENO);
	return (len);
}
