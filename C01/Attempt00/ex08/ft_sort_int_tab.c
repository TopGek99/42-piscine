#include <stdbool.h>

bool	is_sorted(int *arr, int size)
{
	int	counter;

	counter = 0;
	while (counter < size - 1)
	{
		if (arr[counter] > arr[counter + 1])
		{
			return (false);
		}
		counter++;
	}
	return (true);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	outer_count;
	int	inner_count;
	int	temp;

	outer_count = 0;
	while (outer_count < size)
	{
		inner_count = outer_count + 1;
		while (inner_count < size)
		{
			if (tab[outer_count] > tab[inner_count])
			{
				temp = tab[outer_count];
				tab[outer_count] = tab[inner_count];
				tab[inner_count] = temp;
			}
			inner_count++;
		}
		outer_count++;
		if (outer_count == size && !is_sorted(tab, size))
		{
			outer_count = 0;
		}
	}
}
