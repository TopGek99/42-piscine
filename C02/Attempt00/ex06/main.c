#include <stdio.h>

int ft_str_is_printable(char *str);

int main(void)
{
	char printable[] = "this is printable";
	char not_printable[] = "abc\0d";
	char empty[] = "";
	
	printf("str1: %d\n", ft_str_is_printable(printable));
	printf("str2: %d\n", ft_str_is_printable(not_printable));
	printf("empty: %d\n", ft_str_is_printable(empty));
}