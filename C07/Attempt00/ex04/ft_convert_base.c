#include <stdlib.h>
#include <stdio.h>

int	check_base(char *base_str)
{
	int		base_num;
	int		str_ctr;

	base_num = 0;
	while (base_str[base_num])
	{
		str_ctr = 0;
		while (str_ctr < base_num)
		{
			if (base_str[str_ctr] == base_str[base_num])
				return (0);
			str_ctr++;
		}
		base_num++;
	}
	return(base_num);
}

int	ft_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_power(nb, power - 1));
}

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

unsigned int	ft_abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	return (n);
}

int	num_to_str(int num, char *dest)
{
	unsigned int	nb_arr[10];
	unsigned int	temp;
	unsigned int	count;
	unsigned int	reverse_count;
	unsigned int	absolute_nb;

	if (num == 0)
	{
		*dest = '0';
		return (1);
	}
	absolute_nb = ft_abs(num);
	count = 0;
	while (absolute_nb > 0)
	{
		temp = absolute_nb % 10;
		absolute_nb = absolute_nb / 10;
		nb_arr[count++] = temp;
	}
	reverse_count = 0;
	while (count > 0)
		dest[--count] = nb_arr[reverse_count++] + '0';
	return (reverse_count);
}

char	*from_base_to_dec(char *base, char *nbr)
{
	char	*res;
	int		digit;
	int		size;
	int		dec;
	int		ctr;

	res = (char *)malloc(10);
	size = ft_strlen(nbr) - 1;
	ctr = 0;
	dec = 0;
	while (size >= 0)
	{
		digit = (nbr[size] - '0');
		if (digit >= 10)
			digit = nbr[size] - 55;
		dec += ft_power(check_base(base), ctr)*digit;
		size--;
		ctr++;
	}
	num_to_str(dec, res);
	return res;
}



// char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
// {
	
// }
