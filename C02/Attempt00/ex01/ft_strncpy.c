char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	ctr;

	ctr = 0;
	while (src[ctr] && ctr < n)
	{
		dest[ctr] = src[ctr];
		ctr++;
	}
	while (ctr < n)
	{
		dest[ctr] = '\0';
		ctr++;
	}
	return (dest);
}
