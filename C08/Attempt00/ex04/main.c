#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int main(int argc, char **argv)
{
	struct s_stock_str *arr = ft_strs_to_tab(argc, argv);
	if (arr)
	for (int i=0;i<argc;i++)
		printf("\nsize: %d\nstr: %s\ncopy: %s\n\n", arr[i].size, arr[i].str, arr[i].copy);
	else
	printf("No good\n");
}