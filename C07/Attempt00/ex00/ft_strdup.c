#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	ctr;

	ctr = 0;
	while (src[ctr])
	{
		dest[ctr] = src[ctr];
		ctr++;
	}
	dest[ctr] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(src));
	ft_strcpy(new_str, src);
	return (new_str);
}
