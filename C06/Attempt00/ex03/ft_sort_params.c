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
	int		str_count;
	char	*temp;

	outer_count = 0;
	while (outer_count < size)
	{
		inner_count = outer_count + 1;
		while (inner_count < size)
		{
			str_count = 0;
			while (tab[inner_count][str_count])
			{
				if (tab[outer_count][str_count] > tab[inner_count][str_count])
				{
					temp = tab[outer_count];
					tab[outer_count] = tab[inner_count];
					tab[inner_count] = temp;
					break;
				}
				str_count++;
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
