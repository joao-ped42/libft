#include <stdlib.h>

char    *ft_strdup(const char *s)
{
    int i;
    char    *str2;

    i = 0;
    while (s[i])
        i++;
    str2 = malloc(sizeof(char) * (i + 1));
    i = 0;
    while (s[i])
    {
        str2[i] = s[i];
        i++;
    }
    return (str2);
}
/*#include <stdio.h>
int main(void)
{
    char naruto[] = "Soldado Soldado";
    char sonic[] = ft_strdup(naruto);
    printf("%s", sonic);
}*/