char	*ft_strstr(char *str, char *to_find)
{
	int	str_index;
	int	find_index;
	int	find_start;

	str_index = 0;
	while (str[str_index])
	{
		find_index = 0;
		find_start = -1;
		while (str[str_index] == to_find[find_index])
		{
			if (find_index == 0)
			{
				find_start = str_index;
			}
			find_index++;
			if (!to_find[find_index])
			{
				return (&str[find_start]);
			}
			str_index++;
		}
		str_index += find_index + 1;
	}
	return (0);
}
