#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	char alpha_uppercase[] = "ASFDAFDSFSVVFRSV";
	char alpha_lowercase[] = "iadbfisdfsdASDdonfdsj";
	char not_alpha[] = "87g3n823fj023;'.df";
	char empty[] = "";

	printf("str1: %d\n", ft_str_is_uppercase(alpha_uppercase));
	printf("str1: %d\n", ft_str_is_uppercase(alpha_lowercase));
	printf("str2: %d\n", ft_str_is_uppercase(not_alpha));
	printf("empty: %d\n", ft_str_is_uppercase(empty));
}