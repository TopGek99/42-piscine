int	ft_str_is_numeric(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		if (!(str[ctr] >= '0' && str[ctr] <= '9'))
		{
			return (0);
		}
		ctr++;
	}
	return (1);
}
