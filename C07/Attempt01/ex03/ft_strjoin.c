#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index_dest;
	int	index_src;

	index_dest = 0;
	index_src = 0;
	while (dest[index_dest])
	{
		index_dest++;
	}
	while (src[index_src])
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}
	dest[index_dest] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		ctr;

	res = (char *)malloc(sizeof(strs) + (sizeof(sep) * (size - 1)));
	if (res == NULL)
	{
		return (0);
	}
	ctr = 0;
	while (ctr < size)
	{
		ft_strcat(res, strs[ctr]);
		if (ctr != size - 1)
			ft_strcat(res, sep);
		ctr++;
	}
	return (res);
}
