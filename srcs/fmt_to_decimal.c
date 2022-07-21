/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_to_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:58:15 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 16:58:15 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	fmt_to_decimal(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa(nbr);
	len = ft_strlen(str);
	ft_putstr_fd(str, STDOUT_FILENO);
	free(str);
	return (len);
}
