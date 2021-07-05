int	ft_str_is_printable(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		if (str[ctr] < 32 || str[ctr] > 126)
		{
			return (0);
		}
		ctr++;
	}
	return (1);
}
