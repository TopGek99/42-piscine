#include <unistd.h>

int	num_to_str(int num, char *dest)
{
	int	nb_arr[10];
	int	temp;
	int	count;
	int	reverse_count;

	count = 0;
	while (num > 0)
	{
		temp = num % 10;
		num = num / 10;
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

void	write_digits(int f, int s, char *f_str, char *s_str)
{
	write(1, f_str, 2);
	write(1, " ", 1);
	write(1, s_str, 2);
	if (!(f == 98 && s == 99))
	{
		write(1, ", ", 2);
	}
}

void	digits_to_string(int f, int s)
{
	char	f_str[3];
	char	s_str[3];

	if (f < 10)
	{
		f_str[0] = '0';
		f_str[1] = f + '0';
	}
	else
	{
		num_to_str(f, f_str);
	}
	if (s < 10)
	{
		s_str[0] = '0';
		s_str[1] = s + '0';
	}
	else
	{
		num_to_str(s, s_str);
	}
	write_digits(f, s, f_str, s_str);
}

void	ft_print_comb2(void)
{
	int	first_num;
	int	second_num;

	first_num = 0;
	while (first_num != 99)
	{
		second_num = first_num + 1;
		while (second_num != 100)
		{
			digits_to_string(first_num, second_num);
			second_num++;
		}
		first_num++;
	}
}
