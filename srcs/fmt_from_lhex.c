/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_from_lhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:31:57 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 17:39:38 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
 
int	 fmt_from_lhex(unsigned int nb)
{
	char	*hex;
	int		len;

	len = 0;
	hex = ft_ithex(nb);
	while (hex && hex[len])
	{
		ft_tolower(hex[len]);
		len++;
	}
	ft_putstr_fd(hex, STDOUT_FILENO);
	free(hex);
	return (len);
}
