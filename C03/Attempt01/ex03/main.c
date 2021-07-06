#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int n);

int main(void)
{
	char str1[13] = "Hello ";
	char str2[] = "Worlds!";
	// char str3[14] = "Hello ";
	// char str4[] = "Worlds!";
	char *str5 = ft_strncat(str1, str2, 10);
	// char *str6 = strncat(str3, str4, 10);
	printf("ft_strncat: %s\n", str5);
	// printf("strncat: %s\n", str6);
}