#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ctr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(max - min);
	ctr = 0;
	while (min < max)
	{
		*(*range + ctr) = min;
		ctr++;
		min++;
	}
	return (ctr);
}
