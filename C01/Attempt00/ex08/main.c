#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int arr[5] = {3,4,2,5,1};
	printf("\narray before:\n");
	for (int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	ft_sort_int_tab(arr,5);
	printf("\narray after:\n");
	for (int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
