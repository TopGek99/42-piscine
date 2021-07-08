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
	}
}
