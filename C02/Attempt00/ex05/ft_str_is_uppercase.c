int	ft_str_is_uppercase(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		if (!(str[ctr] >= 'A' && str[ctr] <= 'Z'))
		{
			return (0);
		}
		ctr++;
	}
	return (1);
}
