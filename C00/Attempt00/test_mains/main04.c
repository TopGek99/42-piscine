#include <stdio.h>

void ft_is_negative(int n);

int main(void) {
	printf("-------------------------------------------------------------------------\n");
	printf("expected output:\n");
	printf("P\nP\nN\n");
	printf("-------------------------------------------------------------------------\n");
	printf("actual output:\n");
	ft_is_negative(5);
	printf("\n");
	ft_is_negative(0);
	printf("\n");
	ft_is_negative(-5);
	printf("\n");
	printf("-------------------------------------------------------------------------\n");

	return (0);
}