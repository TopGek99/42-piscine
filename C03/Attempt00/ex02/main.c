#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char str1[13] = "Hello ";
	char str2[] = "World!";
	char *str3 = ft_strcat(str1, str2);
	printf("ft_strcat: %s\n", str3);
}