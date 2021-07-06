#include <unistd.h>

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
		nb_arr[count] = temp;
		count++;
	}
	reverse_count = 0;
	while (count > 0)
	{
		dest[--count] = nb_arr[reverse_count++] + '0';
	}
	return (reverse_count);
}

void	ft_putnbr(int nb)
{
	char	nb_str[10];

	if (nb < 0)
	{
		write(1, "-", 1);
	}
	write(1, nb_str, num_to_str(nb, nb_str));
}
