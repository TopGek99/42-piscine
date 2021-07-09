#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int *range = ft_range(3, 10);

	for (int i=0;i<7;i++)
	{
		printf("%d\n", range[i]);
	}

	return 0;
}