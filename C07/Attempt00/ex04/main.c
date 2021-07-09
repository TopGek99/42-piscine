#include <stdio.h>

char	*from_base_to_dec(char *base, char *nbr);

int main(void)
{
	printf("%s\n", from_base_to_dec("0123456789ABCDEF", "AAAAAA"));
}