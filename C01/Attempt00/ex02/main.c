#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int n = 69;
	int i = 420;
	int *ptr1 = &n;
	int *ptr2 = &i;
	
	printf("\nn before: %d\ni before: %d\n",n,i);

	ft_swap(ptr1, ptr2);

	printf("\nn after: %d\ni after: %d\n\n",n,i);

	return 0;
}
