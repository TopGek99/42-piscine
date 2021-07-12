#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{
	char *str = "Matthew sucks";
	char *new_str;

	new_str = ft_strdup(str);
	printf("%s\n", new_str);
}