#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str2[] = "SIHD JHSDhaon HSDasdhaUHs324 sa324ADSasd 324dasdASDasd sfgsfgfdg";
	printf("before: %s\n",str1);
	printf("after: %s\n",ft_strcapitalize(str1));

	printf("\nbefore: %s\n",str2);
	printf("after: %s\n",ft_strcapitalize(str2));

	return 0;
}