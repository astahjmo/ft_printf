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

static void	ft_fill_array(u_long num, char *arr, int size)
{
	while (num >= 16)
	{
		arr[size] = ft_tolower(MASK_HEX[(num % 16)]);
		num /= 16;
		size--;
	}
	arr[size] = ft_tolower(MASK_HEX[(num % 16)]);
}

char	*fmt_from_lhex(int nb)
{

	int	aux;
	size_t	int_size;
	char	*str;

	aux = nb;
	int_size = 0;
	while (aux >= 16)
	{
		aux /= 16;
		int_size++;
	}
	int_size += 2;
	str = malloc((sizeof(char) * int_size));
	str[int_size -1] = '\0';
	ft_fill_array(nb, str, (int_size - 2));
	return (str);
}
