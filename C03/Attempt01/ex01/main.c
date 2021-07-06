#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char str1[] = "abc";
	char str2[] = "abcasdad";
	char str3[] = "abcssd";

	printf("strncmp: %d\n", strncmp(str1, str2, 10));
	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 10));
	printf("\nstrncmp: %d\n", strncmp(str1, str3, 4));
	printf("ft_strncmp: %d\n", ft_strncmp(str1, str3, 4));
	printf("\nstrncmp: %d\n", strncmp(str2, str3, 4));
	printf("ft_strncmp: %d\n", ft_strncmp(str2, str3, 4));
}