#include <stdlib.h>

unsigned int	ft_abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}

int	*ft_range(int min, int max)
{
	int	*vals;
	int	ctr;

	if (min >= max)
		return (NULL);
	vals = (int *)malloc(ft_abs(max - min));
	if (vals == NULL)
		return (0);
	ctr = 0;
	while (min < max)
	{
		vals[ctr] = min;
		ctr++;
		min++;
	}
	return (vals);
}
