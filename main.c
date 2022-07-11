#include "include/ft_printf.h"

int main()
{
	char *str = "Eu amo a minami";
	ft_printf("Memory address:%p\nString:%s\n%d\n%i\n%u\nHEX:%X\nhex:%x", str, str,10000,182738972, -1, 182738972, 182738972);
	printf("\nAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
	printf("\nMemory address:%p\nString:%s\n%d\n%i\n%u\nHEX%X\nhex:%x", str, str, 10000,182738972, -1, 182738972,182738972);
}
