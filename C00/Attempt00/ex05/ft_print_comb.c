#include <unistd.h>

void	write_digits(int f, int s, int t)
{
	char	temp[3];

	temp[0] = f + '0';
	temp[1] = s + '0';
	temp[2] = t + '0';
	write(1, temp, 3);
	if (f != 7)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	first_digit;
	int	second_digit;
	int	third_digit;

	first_digit = 0;
	while (first_digit != 8)
	{
		second_digit = first_digit + 1;
		while (second_digit != 9)
		{
			third_digit = second_digit + 1;
			while (third_digit != 10)
			{
				write_digits(first_digit, second_digit, third_digit);
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
}
