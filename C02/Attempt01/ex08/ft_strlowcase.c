char	*ft_strlowcase(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		if (str[ctr] >= 'A' && str[ctr] <= 'Z')
		{
			str[ctr] += 32;
		}
		ctr++;
	}
	return (str);
}
