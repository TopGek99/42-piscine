#include <unistd.h>
#include <stdlib.h>
// #include <stdio.h>

void	str_to_intarr(char *src, int *dest)
{
	int str_index;
	int arr_index;


	str_index = 0;
	arr_index = 0;
	while (src[str_index])
	{
		if (src[str_index] != ' ')
		{
			dest[arr_index] = src[str_index] - '0';
			arr_index++;
		}
		str_index++;
	}
}

int main(int argc, char **argv)
{
	char *input_str;
	int input_arr[16];
	int output_arr[16];
	int index;
	
	input_str = argv[1];
	index = 0;
	while (index < 16)
	{
		output_arr[index] = 0;
	}
	if (argc > 2)
	{
		write(1,"Too many arguments.",20);
		return (0);
	}
	str_to_intarr(input_str, input_arr);
	index = 0;
	while (index < 16)
	{
		if (index >= 0 && index <= 3)
		{
			if (input_arr[index] == 4)
			{
				if (input_arr[index + 4] == 1)
				{
					output_arr[index] = 1;
					output_arr[index + 4] = 2;
					output_arr[index + 8] = 3;
					output_arr[index + 12] = 4;
				}
				else
				{
					write(1, "Solution not possible\n", 23);
				}
			}
			else if (input_arr[index] == 1)
			{
				if (input_arr[index + 4] != 1)
				{
					output_arr[index] = 4;
				}
				else
				{
					write(1, "Solution not possible\n", 23);
				}
			}
			else if (input_arr[index] == 2)
			{
				if (input_arr[index + 4] != 4)
				{
					if (input_arr[index + 4] == 1)
					{
						output_arr[index] = 3;
						output_arr[index + 12] = 4;
					}
					else if (input_arr[index + 4] == 2)
					{

					}
					else if (input_arr[index + 4] == 3)
					{
						output_arr[index + 4] = 4;
					}
				}
				else
				{
					write(1, "Solution not possible\n", 23);
				}
			}
			else if (input_arr[index] == 3)
			{
				if (input_arr[index + 4] != 4 && input_arr[index + 4] != 3)
				{
					if (input_arr[index + 4] == 1)
					{
						output_arr[index] = 2;
						output_arr[index + 12] = 4;
					}
					else if (input_arr[index + 4] == 2)
					{
						output_arr[index + 8] = 4;
					}
				}
				else
				{
					write(1, "Solution not possible\n", 23);
				}
			}
		}
		else if (index >= 8 && index <= 11)
		{
			if (input_arr[index] == 4)
			{
				if (input_arr[index + 4] == 1)
				{
					output_arr[(index - 8) * 4] = 1;
					output_arr[((index - 8) * 4) + 1] = 2;
					output_arr[((index - 8) * 4) + 2] = 3;
					output_arr[((index - 8) * 4) + 3] = 4;
				}
				else
				{
					write(1, "Solution not possible\n", 23);
				}
			}
			else if (input_arr[index] == 1)
			{
				if (input_arr[index + 4] != 1)
				{
					output_arr[index] = 4;
				}
				else
				{
					write(1, "Solution not possible\n", 23);
				}
			}
			else if (input_arr[index] == 2)
			{
				if (input_arr[index + 4] != 4)
				{
					if (input_arr[index + 4] == 1)
					{
						output_arr[index] = 3;
						output_arr[index + 12] = 4;
					}
					else if (input_arr[index + 4] == 2)
					{

					}
					else if (input_arr[index + 4] == 3)
					{
						output_arr[index + 4] = 4;
					}
				}
				else
				{
					write(1, "Solution not possible\n", 23);
				}
			}
			else if (input_arr[index] == 3)
			{
				if (input_arr[index + 4] != 4 && input_arr[index + 4] != 3)
				{
					if (input_arr[index + 4] == 1)
					{
						output_arr[index] = 2;
						output_arr[index + 12] = 4;
					}
					else if (input_arr[index + 4] == 2)
					{
						output_arr[index + 8] = 4;
					}
				}
				else
				{
					write(1, "Solution not possible\n", 23);
				}
			}
		}
	}


	return (0);
}