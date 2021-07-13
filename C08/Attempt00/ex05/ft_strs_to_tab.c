#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*struct_arr;
	char				*temp;
	int					index;

	struct_arr = malloc(sizeof(struct s_stock_str) * ac);
	if (struct_arr == NULL)
		return (NULL);
	index = 0;
	
	while (index < ac)
	{
		temp = malloc(sizeof(av[index]));
		ft_strcpy(temp, av[index]);
		if (temp == NULL)
			return (NULL);
		struct_arr[index].size = ft_strlen(temp);
		struct_arr[index].str = malloc(struct_arr[index].size + 1);
		struct_arr[index].copy = malloc(struct_arr[index].size + 1);
		ft_strcpy(struct_arr[index].str, temp);
		ft_strcpy(struct_arr[index].copy, temp);
		if (struct_arr[index].copy == NULL)
			return (NULL);
		index++;
	}
	struct_arr[index].str = 0;
	return (struct_arr);
}