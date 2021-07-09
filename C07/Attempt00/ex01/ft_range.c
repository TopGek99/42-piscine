#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*vals;
	int	ctr;

	if (min >= max)
		return (NULL);
	vals = (int *)malloc(max - min);
	ctr = 0;
	while (min < max)
	{
		vals[ctr] = min;
		ctr++;
		min++;
	}
	return (vals);
}
