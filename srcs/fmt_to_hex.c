/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_to_lhex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:31:57 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 17:39:38 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	fmt_to_hex(unsigned int nb, int is_upper)
{
	char	*hex;
	int		len;

	len = 0;
	hex = ft_ithex(nb);
	while (hex && hex[len])
	{
		if (is_upper)
			hex[len] = ft_toupper(hex[len]);
		len++;
	}
	ft_putstr_fd(hex, STDOUT_FILENO);
	free(hex);
	return (len);
}
