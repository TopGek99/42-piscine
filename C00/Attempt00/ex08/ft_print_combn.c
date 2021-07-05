#include <unistd.h>

void	write_digit(int num)
{
	char	c;

	c = num + '0';
	write(1, &c, 1);
}

void	write_digits(int *digits, int length)
{
	int	counter;

	counter = 0;
	while (counter < length)
	{
		write_digit(digits[counter]);
		counter++;
	}
	if (digits[0] != 10 - length)
	{
		write(1, ", ", 2);
	}
}

void	print_combn_r(int *arr, int amount, int current, int temp_counter)
{
	int	counter;
	int	max;

	if (current == amount)
	{
		write_digits(arr, amount);
	}
	else
	{
		max = 10 - (amount - current) + 1;
		counter = temp_counter + 1;
		while (counter < max)
		{
			arr[current] = counter;
			print_combn_r(arr, amount, current + 1, counter);
			counter++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	digit_num;
	int	digits[10];

	digit_num = 0;
	while (digit_num < n)
	{
		digits[digit_num] = 0;
		digit_num++;
	}
	print_combn_r(digits, n, 0, -1);
}
