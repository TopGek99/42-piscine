#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char alpha_uppercase[] = "ibdvASDjibasdasASDdadF";
	char alpha_lowercase[] = "iadbfidonfdsj";
	char not_alpha[] = "87g3n823fj023;'.df";
	char empty[] = "";

	printf("str1: %d\n", ft_str_is_lowercase(alpha_uppercase));
	printf("str1: %d\n", ft_str_is_lowercase(alpha_lowercase));
	printf("str2: %d\n", ft_str_is_lowercase(not_alpha));
	printf("empty: %d\n", ft_str_is_lowercase(empty));
}