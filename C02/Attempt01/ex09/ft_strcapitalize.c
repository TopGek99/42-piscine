char	*ft_strlowcase(char *str, int len)
{
	int	ctr;

	ctr = 0;
	while (ctr < len)
	{
		if (str[ctr] >= 'A' && str[ctr] <= 'Z')
		{
			str[ctr] += 32;
		}
		ctr++;
	}
	return (str);
}

int	capitalize_word(char *str, int ctr)
{
	int	w_ctr;
	int	w_start;
	int	w_len;

	w_ctr = ctr;
	w_start = -1;
	w_len = 0;
	while ((str[w_ctr] >= 'A' && str[w_ctr] <= 'Z')
		|| (str[w_ctr] >= 'a' && str[w_ctr] <= 'z')
		|| (str[w_ctr] >= '0' && str[w_ctr] <= '9'))
	{
		if (w_start == -1)
		{
			if (str[w_ctr] >= 'a' && str[w_ctr] <= 'z')
			{
				str[w_ctr] -= 32;
			}
			w_start = w_ctr + 1;
		}
		w_ctr++;
		w_len++;
	}
	ft_strlowcase(&str[w_start], w_len);
	return (w_ctr);
}

char	*ft_strcapitalize(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		ctr = capitalize_word(str, ctr) + 1;
	}
	return (str);
}
