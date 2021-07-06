#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{
	char str1[] = "this sentence is pointless";
	char str2[] = " is";

	printf("ft_strstr: %s\n", ft_strstr(str1, str2));
	printf("strstr: %s\n", strstr(str1, str2));
}