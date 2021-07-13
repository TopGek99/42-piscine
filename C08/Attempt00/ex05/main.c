#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(int argc, char **argv)
{
	struct s_stock_str *arr = ft_strs_to_tab(argc, argv);
	if (arr)
		ft_show_tab(arr);
}