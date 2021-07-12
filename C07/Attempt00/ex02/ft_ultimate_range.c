#include <stdlib.h>

unsigned int	ft_abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ctr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(ft_abs(max - min));
	if (range == NULL)
		return (-1);
	ctr = 0;
	while (min < max)
	{
		*(*range + ctr) = min;
		ctr++;
		min++;
	}
	return (ctr);
}
