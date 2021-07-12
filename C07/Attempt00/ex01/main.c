#include <stdio.h>

int	*ft_range(int min, int max);
unsigned int	ft_abs(int n);

int main(void)
{
	int max = 19;
	int min = -5;
	int *range = ft_range(min, max);
	int	size = ft_abs(max - min);
	
	if (range)
	{
		for (int i=0;i<size;i++)
		{
			printf("%d\n", range[i]);
		}
	}
	else
	{
		printf("No good\n");
	}
	

	return 0;
}