int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	ctr;
	int				diff;

	ctr = 0;
	while (ctr < n && !(s1[ctr] == '\0' && s2[ctr] == '\0'))
	{
		if (s1[ctr] != s2[ctr])
		{
			diff = s1[ctr] - s2[ctr];
			return (diff);
		}
		ctr++;
	}
	return (0);
}
