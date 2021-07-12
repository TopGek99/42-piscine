#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int *range;
	int size = ft_ultimate_range(&range, 3, 10);

	for (int i=0;i<size;i++)
	{
		printf("%d\n", range[i]);
	}

	return 0;
}