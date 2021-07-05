#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char str1[] = "01234567890";
    char str2[40];
    char str4[40];
    ft_strncpy(str2, str1, sizeof(str2));
    printf("%s\n", str2);
    ft_strncpy(str4, str1, 5);
    str4[5] = '\0';
    printf("%s\n", str4);
    

    return 0;
}