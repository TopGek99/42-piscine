int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		if (res == 0)
			res++;
		res *= nb;
		nb--;
	}
	return (res);
}
