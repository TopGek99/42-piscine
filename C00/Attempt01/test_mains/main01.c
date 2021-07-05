#include <stdio.h>

void ft_print_alphabet(void);

int main(void) {
	printf("-------------------------------------------------------------------------\n");
	printf("expected output:\n");
	printf("abcdefghijklmnopqrstuvwxyz\n");
	printf("-------------------------------------------------------------------------\n");
	printf("actual output:\n");
	ft_print_alphabet();
	printf("\n");
	printf("-------------------------------------------------------------------------\n");

	return (0);
}