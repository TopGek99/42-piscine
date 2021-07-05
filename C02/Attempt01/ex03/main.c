#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char numeric[] = "012874839279";
	char not_numeric[] = "87g3n823fj023;'.df";
	char empty[] = "";

	printf("str1: %d\n", ft_str_is_numeric(numeric));
	printf("str2: %d\n", ft_str_is_numeric(not_numeric));
	printf("empty: %d\n", ft_str_is_numeric(empty));
}