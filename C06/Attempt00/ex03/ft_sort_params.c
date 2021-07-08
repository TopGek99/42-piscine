#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, str + counter, 1);
		counter++;
	}
}

void	ft_sort_str_arr(char **tab, int size)
{
	int		outer_count;
	int		inner_count;
	char	*temp;

	outer_count = 0;
	while (outer_count < size)
	{
		inner_count = outer_count + 1;
		while (inner_count < size)
		{
			if (tab[outer_count][0] > tab[inner_count][0])
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

int	main(int argc, char **argv)
{
	char	**sort;
	int		index;

	sort = &argv[1];
	ft_sort_str_arr(sort, argc - 1);
	index = 0;
	while (index < argc - 1)
	{
		ft_putstr(sort[index]);
		write(1, "\n", 1);
		index++;
	}
	return (0);
}
