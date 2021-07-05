#include <unistd.h>

void	ft_print_numbers(void)
{
	char	*digits;

	digits = "0123456789";
	write(1, digits, 10);
}
