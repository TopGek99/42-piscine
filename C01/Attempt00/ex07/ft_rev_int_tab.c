void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	rev_counter;
	int	temp;

	counter = 0;
	rev_counter = size - 1;
	while (counter != rev_counter && counter < rev_counter)
	{
		temp = tab[counter];
		tab[counter] = tab[rev_counter];
		tab[rev_counter] = temp;
		counter++;
		rev_counter--;
	}
}
