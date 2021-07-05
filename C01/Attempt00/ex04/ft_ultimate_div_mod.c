void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_val;
	int	b_val;

	a_val = *a;
	b_val = *b;
	*a = a_val / b_val;
	*b = a_val % b_val;
}
