#include <stdio.h>

void ft_putstr(char *str);

int main(void)
{
	char my_str[14] = "Hello, World!";

	printf("\nexpected output:\nHello, World!\n");

	printf("\nactual output:\n");
	ft_putstr(my_str);
	printf("\n\n");


	return 0;
}
