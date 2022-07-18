/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:02:30 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/12 13:34:31 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define MASK_CONVERSION "cspdiuxX"
# define MASK_HEX "0123456789abcdef"
# include "../include/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <malloc.h>

int		ft_printf(const char *str, ...);
int		parser(const char *s, va_list ap);
int		fmt_from_decimal(int nbr);
int		fmt_from_udecimal(unsigned int nbr);
int		fmt_from_char(char s);
int		fmt_from_string(char *s);
int		fmt_from_lhex(unsigned int nb);
int		fmt_from_uhex(unsigned int nb);
int		fmt_from_pointer(void *pointer);
#endif
