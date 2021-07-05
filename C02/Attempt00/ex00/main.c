#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
    char str1[] = "Garbage112222";
    char str2[] = "Hello";
    ft_strcpy(str2, str1);
    printf("%s\n", str2);

    return 0;
}
