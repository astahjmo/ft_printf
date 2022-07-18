/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_from_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:07:58 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 21:32:19 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

int	fmt_from_udecimal(unsigned int n)
{
	char	*str;
	int		len;

	str = ft_ubase(n, 10);
	len = ft_strlen(str);
	ft_putstr_fd(str, STDOUT_FILENO);
	free (str);
	return (len);
}
