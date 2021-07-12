#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*vals;
	int	ctr;

	if (min >= max)
		return (NULL);
	vals = malloc(sizeof(int)*(max - min));
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
