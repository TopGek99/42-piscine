char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	index_src;
	int				index_dest;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest])
	{
		index_dest++;
	}
	while (index_src < n && src[index_src])
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	dest[index_dest] = '\0';
	return (dest);
}
