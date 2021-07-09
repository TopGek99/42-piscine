#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc - 1, &argv[1], "pp"));
}