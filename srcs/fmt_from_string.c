/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fmt_from_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:23:56 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/04 22:26:39 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/ft_printf.h"

char	*fmt_from_string(char *s)
{
	char *str;

	str = ft_strdup(s);
	return (str);
}
