int	ft_str_is_alpha(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		if (!((str[ctr] >= 'A' && str[ctr] <= 'Z')
				|| (str[ctr] >= 'a' && str[ctr] <= 'z')))
		{
			return (0);
		}
		ctr++;
	}
	return (1);
}
