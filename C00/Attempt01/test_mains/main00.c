#include <stdio.h>

void ft_putchar(char c);

int main(void) {
	printf("-------------------------------------------------------------------------\n");
	printf("expected output:\n");
	printf("A\n");
	printf("-------------------------------------------------------------------------\n");
	printf("actual output:\n");
	ft_putchar('A');
	printf("\n");
	printf("-------------------------------------------------------------------------\n");

	return (0);
}