#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int n;
	int *a = &n;

	ft_ft(a);
	printf("\nexpected output:\n42\n");
	printf("\nactual output:\n%d\n\n",n);
}
