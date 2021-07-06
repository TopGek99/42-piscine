int	ft_strcmp(char *s1, char *s2)
{
	int	ctr;
	int	diff;

	ctr = 0;
	while (s1[ctr])
	{
		if (s1[ctr] != s2[ctr])
		{
			diff = s1[ctr] - s2[ctr];
			return (diff);
		}
		ctr++;
	}
	if (s2[ctr])
	{
		diff = s1[ctr] - s2[ctr];
		return (diff);
	}
	return (0);
}
