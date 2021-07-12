#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ctr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int)*(max - min));
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
