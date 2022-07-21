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
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isascii(int n);
int		ft_toupper(int c);
char	*ft_itoa(int n);
char	*ft_ithex(unsigned int n);
char	*ft_ubase(unsigned long n, unsigned long base);
char	*ft_strchr(const char *str, int find);
size_t	ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_printf(const char *str, ...);
int		parser(const char *s, va_list ap);
int		fmt_to_decimal(int nbr);
int		fmt_to_udecimal(unsigned int nbr);
int		fmt_to_char(char s);
int		fmt_to_string(char *s);
int		fmt_to_hex(unsigned int nb, int is_upper);
int		fmt_to_pointer(void *pointer);
#endif
