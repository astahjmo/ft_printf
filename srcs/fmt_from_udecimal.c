/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_from_udecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:07:58 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 19:15:32 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

static void	ft_fill_array(unsigned long num, char *arr, int size)
{
	if (num != 0)
	{
		arr[0] = '-';
		num = -num;
	}
	while (num >= 10)
	{
		arr[size] = (num % 10) + '0';
		num /= 10;
		size--;
	}
	arr[size] = (num % 10) + '0';
}

char	*ft_uitoa(unsigned int n)
{
	char	*arr;
	long	num;
	int		is_negative;
	int		int_size;

	int_size = 1;
	is_negative = 0;
	num = n;
	if (n != 0)
	{
		is_negative = 1;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		int_size++;
	}
	arr = malloc(sizeof(char) * (int_size + is_negative) + 1);
	if (arr == NULL)
		return (NULL);
	ft_fill_array(num, arr, (int_size + is_negative) - 1);
	arr[int_size + is_negative] = '\0';
	return (arr);
}

char	*fmt_from_udecimal(unsigned int n)
{
	return (ft_uitoa(n));
}
