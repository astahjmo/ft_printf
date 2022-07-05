/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astaroth </var/spool/mail/astaroth>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 20:02:30 by astaroth          #+#    #+#             */
/*   Updated: 2022/07/04 20:53:31 by astaroth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define MASK_CONVERSION "cspdiuxX%"
# define MASK_HEX "0123456789abcdef"
# include "../include/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <malloc.h>
#endif

int	ft_printf(const char *str, ...);
char	*fmt_from_char(char s);
char	*fmt_from_string(char *s);
char	*fmt_from_int(int nbr);
