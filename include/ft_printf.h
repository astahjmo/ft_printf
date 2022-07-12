/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:02:30 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/11 22:00:48 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define MASK_CONVERSION "spdiuxX%"
# define MASK_HEX "0123456789abcdef"
# include "../include/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <malloc.h>

int			ft_printf(const char *str, ...);
int			parser(const char *s, va_list ap);
char		*fmt_from_decimal(int nbr);
char		*fmt_from_udecimal(unsigned int nbr);
char		*fmt_from_char(char s);
char		*fmt_from_string(char *s);
char		*fmt_from_lhex(int nb);
char		*fmt_from_uhex(int nb);
char		*fmt_from_pointer(void *pointer);
#endif
