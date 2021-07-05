#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int *arr;

	for (int i=0;i<5;i++)
	{
		*(arr+i) = i;
	}

	printf("\narray before:\n");
	for (int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	ft_rev_int_tab(arr,5);
	printf("\narray after:\n");
	for (int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
