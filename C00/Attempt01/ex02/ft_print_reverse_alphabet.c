#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	*alpha;

	alpha = "zyxwvutsrqponmlkjihgfedcba";
	write(1, alpha, 26);
}
