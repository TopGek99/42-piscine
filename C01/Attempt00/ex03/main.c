#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int num1 = 127;
	int num2 = 10;
	int div_res, mod_res, *div_pointer, *mod_pointer;
	div_pointer = &div_res;
	mod_pointer = &mod_res;

	ft_div_mod(num1, num2, div_pointer, mod_pointer);

	printf("%d divided by %d is equal to %d, with a remainder %d\n",num1, num2, div_res, mod_res);
}
