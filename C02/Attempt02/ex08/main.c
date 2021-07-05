#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void)
{
	char alpha[] = "ibdvAkhsvsGFUEUGb";
	char not_alpha[] = "87g3n823fj023;'.df";
	char str[] = "LKJNIFDBUBUDHBUHSJHBC";

	printf("str1: %s\n", ft_strlowcase(alpha));
	printf("str2: %s\n", ft_strlowcase(not_alpha));
	printf("str3: %s\n", ft_strlowcase(str));
}
