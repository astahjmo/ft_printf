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

static void	ft_fill_array(u_long num, char *arr, int size)
{
	while (num >= 16)
	{
		arr[size] = MASK_HEX[(num % 16)];
		num /= 16;
		size--;
	}
	arr[size] = MASK_HEX[(num % 16)];
}

char	*fmt_from_pointer(void *pointer)
{
	u_long	pp;
	u_long	aux;
	size_t	int_size;
	char	*str;

	pp = (unsigned long)pointer;
	aux = pp;
	int_size = 0;
	while (aux >= 16)
	{
		aux /= 16;
		int_size++;
	}
	int_size += 4;
	str = malloc((sizeof(char) * int_size));
	str[int_size -1] = '\0';
	str[0] = '0';
	str[1] = 'x';
	ft_fill_array(pp, str, (int_size - 2));
	return (str);
}
