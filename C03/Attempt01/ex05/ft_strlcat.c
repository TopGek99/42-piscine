unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index_src;
	unsigned int	index_dest;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest])
	{
		index_dest++;
	}
	while (index_src < (size - ft_strlen(dest) - 1) && src[index_src])
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	if (size != 0 && index_dest <= size)
		dest[index_dest] = '\0';
	return (ft_strlen(dest));
}
