char	*ft_strupcase(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		if (str[ctr] >= 'a' && str[ctr] <= 'z')
		{
			str[ctr] -= 32;
		}
		ctr++;
	}
	return (str);
}
