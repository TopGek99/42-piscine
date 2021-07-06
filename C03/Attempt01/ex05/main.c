#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char str1[] = "Hello ";
	char str2[] = "World!";
	char dest1[14];
	strcpy(dest1, str1);
	char str3[] = "Hello ";
	char str4[] = "World!";
	char dest2[14];
	strcpy(dest2, str3);

	ft_strlcat(dest1, str2, 14);
	strlcat(dest2, str4, 14);
	printf("ft_strlcat: %s\n", dest1);
	printf("strlcat: %s\n", dest2);
}