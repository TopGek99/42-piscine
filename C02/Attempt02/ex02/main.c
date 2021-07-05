#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char alpha[] = "ibdvAkhsvsGFUEUGb";
	char not_alpha[] = "87g3n823fj023;'.df";
	char empty[] = "";

	printf("str1: %d\n", ft_str_is_alpha(alpha));
	printf("str2: %d\n", ft_str_is_alpha(not_alpha));
	printf("empty: %d\n", ft_str_is_alpha(empty));
}