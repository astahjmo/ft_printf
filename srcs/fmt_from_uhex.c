#include "../include/ft_printf.h"

static void	ft_fill_array(u_long num, char *arr, int size)
{
	while (num >= 16)
	{
		arr[size] = ft_toupper(MASK_HEX[(num % 16)]);
		num /= 16;
		size--;
	}
	arr[size] = ft_toupper(MASK_HEX[(num % 16)]);
}

char	*fmt_from_uhex(int nb)
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
