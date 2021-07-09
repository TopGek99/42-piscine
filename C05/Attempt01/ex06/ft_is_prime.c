int	ft_sqrt(int nb)
{
	int	res;

	res = 46340;
	while (res > 0)
	{
		if (res * res <= nb)
			return (res);
		res--;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	root;

	if (nb < 2)
		return (0);
	i = 2;
	root = ft_sqrt(nb);
	while (i <= root)
	{
		if (nb % i == 0)
			return (0);
		if (i == 2)
			i++;
		else
			i += 2;
		if (i % 3 == 0 && i != 3)
			i += 2;
	}
	return (1);
}
