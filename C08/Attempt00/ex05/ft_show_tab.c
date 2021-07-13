#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, str + counter, 1);
		counter++;
	}
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

void	ft_putnbr(int nb)
{
	char	nb_str[10];

	if (nb < 0)
	{
		write(1, "-", 1);
	}
	write(1, nb_str, num_to_str(nb, nb_str));
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		index;

	index = 0;
	while (par[index].str != 0)
	{
		ft_putstr(par[index].str);
		ft_putstr("\n");
		ft_putnbr(par[index].size);
		ft_putstr("\n");
		ft_putstr(par[index++].copy);
		ft_putstr("\n");
	}
}
