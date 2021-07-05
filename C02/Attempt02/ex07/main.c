#include <stdio.h>

char *ft_strupcase(char *str);

int main(void)
{
	char alpha[] = "ibdvAkhsvsGFUEUGb";
	char not_alpha[] = "87g3n823fj023;'.df";
	char str[] = "dvafsvdfvsdfvdv";

	printf("str1: %s\n", ft_strupcase(alpha));
	printf("str2: %s\n", ft_strupcase(not_alpha));
	printf("str3: %s\n", ft_strupcase(str));
}
