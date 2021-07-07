#include <stdio.h>

void ft_putnbr(int nb);

int main(void) {
	printf("-------------------------------------------------------------------------\n");
	printf("expected output:\n");
	printf("%d\n%d\n%d\n%d\n%ld\n",0,42,1234567890,6,-2147483648);
	printf("-------------------------------------------------------------------------\n");
	printf("actual output:\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(42);
	printf("\n");
	ft_putnbr(1234567890);
	printf("\n");
	ft_putnbr(6);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	printf("-------------------------------------------------------------------------\n");

	return (0);
}
