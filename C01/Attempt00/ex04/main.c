#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int num1 = 127;
	int num2 = 10;
	int *div_pointer, *mod_pointer;
	div_pointer = &num1;
	mod_pointer = &num2;
	
	printf("%d divided by %d is equal to ",num1,num2);

	ft_ultimate_div_mod(div_pointer, mod_pointer);

	printf("%d, with a remainder %d\n",num1, num2);
}
