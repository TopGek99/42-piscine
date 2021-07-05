#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char str1[] = "abcsadas";
	char str2[] = "abct";
	char str3[] = "abcs";

	printf("strcmp: %d\n", strcmp(str1, str2));
	printf("ft_strcmp: %d\n", ft_strcmp(str1, str2));
	printf("\nstrcmp: %d\n", strcmp(str1, str3));
	printf("ft_strcmp: %d\n", ft_strcmp(str1, str3));
	printf("\nstrcmp: %d\n", strcmp(str2, str3));
	printf("ft_strcmp: %d\n", ft_strcmp(str2, str3));
}