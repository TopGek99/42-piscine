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

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *struct_arr;
	struct s_stock_str temp_struct;
	char *temp;
	int index;

	struct_arr = malloc(sizeof(struct s_stock_str) * ac);
	temp_struct.copy = "";
	if (struct_arr == NULL)
		return (NULL);
	while (index < ac)
	{
		temp = av[index];
		temp_struct.size = ft_strlen(temp);
		temp_struct.str = temp;
		ft_strcpy(temp_struct.copy, temp);
		struct_arr[index] = temp_struct;
		index++;
	}
	temp_struct.str = 0;
	struct_arr[index] = temp_struct;
	return struct_arr;
}