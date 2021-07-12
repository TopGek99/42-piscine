#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	struct s_stock_str *arr = ft_strs_to_tab(argc, argv);

	printf("size: %d\nstr: %s\ncopy: %s\n", arr[0].size, arr[0].str, arr[0].copy);
}