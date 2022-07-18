#include "../include/ft_printf.h"


int	 fmt_from_uhex(unsigned int nb)
{
	char	*hex;
	int		len;

	len = 0;
	hex = ft_ithex(nb);
	while (hex && hex[len])
	{
		hex[len] = ft_toupper(hex[len]);
		len++;
	}
	ft_putstr_fd(hex, STDOUT_FILENO);
	free(hex);
	return (len);
}

