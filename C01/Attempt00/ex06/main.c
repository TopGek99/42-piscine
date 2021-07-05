#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

int main(void)
{
	char *my_str = "Hello, World";

	printf("\nexpected output:\nlength of %s is %lu\n",my_str,strlen(my_str));

	printf("\nactual output:\nlength of %s is %d\n\n",my_str,ft_strlen(my_str));

	return 0;
}
